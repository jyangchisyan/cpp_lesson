# 第 56 課：統計及格人數與及格率

[返回本類索引](README.md)

延續 [student_average.cpp](student_average.cpp)。目前程式已完成這一課的及格統計；仍可自行重做練習。

## 5 分鐘重點

第 27 課用過 `std::count_if`：它逐一檢查容器中的元素，統計條件成立的個數。這次把條件改為「學生分數至少 60 分」。剛好 60 分也要算及格。

```cpp
auto passed = std::count_if(students.begin(), students.end(),
    [](const Student& student) { return student.score >= 60; });
```

**及格率**是 `及格人數 ÷ 總人數 × 100`。例如四人中三人及格，及格率為 `75%`。不要直接用兩個整數相除，否則 `3 / 4` 會先變成 `0`；可以用 `100.0 * passed / students.size()` 進行浮點運算。第 55 課已設定 `std::fixed << std::setprecision(2)`，因此輸出時能得到 `75.00%`。

人數為零時不能除以 `students.size()`。維持原有的 `number == 0` 分支，只顯示「沒有學生」，不要計算及格率。

## 一道練習

在 [student_average.cpp](student_average.cpp) 的有學生分支中，於中位數後新增一行：`及格：3 人，及格率：75.00%`。沿用 `output`，讓畫面和 `report.txt` 同步更新；最高分名字和排名維持原順序。

測試輸入 `4 Amy 100 Bob 90 Cathy 80 Dan 0`，結果應是 **3 人、75.00%**。再測 `2 Amy 60 Bob 59`，應是 **1 人、50.00%**；輸入 `0` 時仍只顯示「沒有學生」。

提示：`<algorithm>` 已包含在程式中；先算人數，再算百分比，最後才用 `output` 組合那一行。
