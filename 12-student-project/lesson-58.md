# 第 58 課：用 `std::copy_if` 篩選不及格學生

[返回本類索引](README.md)

延續 [student_average.cpp](student_average.cpp)。目前程式已包含這一課的不及格名單；仍可自行重做練習。

## 5 分鐘重點

第 56 課的 `std::count_if` 只會回傳「有幾人符合條件」。如果想保留符合條件的學生資料，可以用 `std::copy_if`：它走訪來源範圍，將條件成立的元素複製到另一個容器，**不刪除原本的學生**。

```cpp
#include <iterator>

std::vector<Student> failed;
std::copy_if(students.begin(), students.end(), std::back_inserter(failed),
    [](const Student& student) { return student.score < 60; });
```

`failed` 一開始是空的，不能直接將它的 `begin()` 當作輸出位置。`std::back_inserter(failed)` 會在需要時呼叫 `push_back`，讓結果依序加在尾端。因為 `students` 已按分數排序，篩選後的不及格學生也保持相同順序。`60` 分是及格，條件要寫 `< 60`，不是 `<= 60`。

## 一道練習

在 [student_average.cpp](student_average.cpp) 的排名後加上一行不及格名單，使用 `output` 組合文字，讓畫面與 `report.txt` 一致。輸入 `4 Amy 100 Bob 59 Cathy 60 Dan 0` 時，排名仍為 Amy、Cathy、Bob、Dan；最後一行顯示 `不及格名單：Bob Dan`。若所有人都及格，顯示 `不及格名單：無`；若無學生，仍只顯示「沒有學生」。

提示：先用 `copy_if` 建立 `failed`，再檢查 `failed.empty()`；非空時逐一讀取 `student.name`，並注意名字之間的空格。不要在篩選時修改原本的 `students`。
