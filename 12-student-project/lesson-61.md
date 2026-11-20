# 第 61 課：用 `std::set` 檢查重複姓名

[返回本類索引](README.md)

延續 [student_average.cpp](student_average.cpp)。目前程式已包含這一課的重複姓名檢查；仍可自行重做練習。

## 5 分鐘重點

第 20 課學過 `std::set` 不會存入重複值。若學生名字被重複輸入，排名與報告會出現兩筆同名資料；可以在讀取時用 `std::set<std::string>` 記錄已出現的姓名，及早拒絕重複。

`insert(name)` 不只會嘗試加入名字，還會回傳結果。其中的 `.second` 是布林值：**成功加入新名字為 `true`**，原本已有該名字則為 `false`。

```cpp
#include <set>

std::set<std::string> seenNames;
// 讀完一位學生的名字和有效分數後：
if (!seenNames.insert(studentName).second) {
    std::cerr << "輸入錯誤\n";
    return 1;
}
```

將 `seenNames` 建立在讀取學生的迴圈**之前**，使每筆資料共用同一份記錄。重複檢查要在 `students.push_back(...)` 與開啟 `report.txt` **之前**完成；如此失敗時不會加入重複學生，也不會覆寫既有報告。`std::set` 比較字串時區分大小寫，所以 `Amy` 和 `amy` 目前算不同名字。

## 一道練習

在 [student_average.cpp](student_average.cpp) 加入重複姓名檢查，保留原本的分數範圍、等第統計與報告格式。先輸入 `2 Amy 90 Bob 80` 產生有效報告；再輸入 `2 Amy 90 Amy 80`，應顯示「輸入錯誤」並以非零狀態結束，先前的 `report.txt` 保持不變。也測 `0` 位學生與 `Amy`、`amy` 兩個名字。

提示：先宣告一個 `std::set<std::string>`，在每筆姓名及分數都讀取成功後，檢查 `insert(studentName).second`。
