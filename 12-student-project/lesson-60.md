# 第 60 課：用 `std::map` 統計各等第人數

[返回本類索引](README.md)

延續 [student_average.cpp](student_average.cpp)。目前程式已包含這一課的等第統計；仍可自行重做練習。

## 5 分鐘重點

第 17、18 課學過 `std::map` 的「鍵 → 次數」。現在鍵不再是原始分數，而是第 59 課 `gradeForScore` 回傳的字元 `A`、`B`、`C`、`D`、`F`。

```cpp
#include <map>

std::map<char, int> gradeCounts;
for (const Student& student : students) {
    ++gradeCounts[gradeForScore(student.score)];
}
```

第一次使用某個鍵時，`gradeCounts[grade]` 會建立初值為 `0` 的計數，再加一。但直接走訪 `map` 只會看到曾出現過的等第；若想讓報告**固定顯示五種等第**，應依 `A B C D F` 的順序逐一讀取 `gradeCounts[grade]`。不存在的鍵會得到 `0`，因此可以顯示 `B=0` 等結果。

統計只讀取學生資料，不應改動原本排名或不及格名單。沿用既有的 `output` 組合報告，讓畫面和 `report.txt` 完全一致。

## 一道練習

在 [student_average.cpp](student_average.cpp) 的不及格名單後新增一行等第統計，格式如 `等第統計：A=1 B=1 C=1 D=1 F=1`。輸入 `5 Amy 100 Bob 89 Cathy 70 Dan 60 Eva 59` 時，五種等第都應是 `1`。

再測 `2 Amy 95 Bob 90`，應印 `等第統計：A=2 B=0 C=0 D=0 F=0`；輸入 `0` 時仍只顯示「沒有學生」，不額外印統計行。

提示：先完成計數，再用固定順序輸出。可用 `for (char grade : std::string("ABCDF"))` 逐一取得五種等第；注意項目之間的空格，不要在行尾留下多餘空格。
