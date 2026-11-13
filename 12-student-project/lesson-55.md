# 第 55 課：固定小數位數 `std::setprecision`

[返回本類索引](README.md)

延續 [student_average.cpp](student_average.cpp)。目前程式已完成這一課的輸出格式；仍可自行重做練習。

## 5 分鐘重點

上一課的平均數與中位數有時是整數、有時有小數。例如 `80.5` 會顯示成 `80.5`，而 `85` 只顯示 `85`。報告若希望固定顯示兩位小數，可以搭配 `<iomanip>` 中的 `std::setprecision(2)` 與 `std::fixed`：

```cpp
#include <iomanip>

std::ostringstream output;
output << std::fixed << std::setprecision(2);
output << 80.5 << '\n';  // 80.50
output << 85.0 << '\n';  // 85.00
```

只使用 `std::setprecision(2)` 時，預設代表**兩位有效數字**，不是小數點後兩位；需要先加 `std::fixed`。設定會持續作用於同一個輸出串流；學生分數仍是 `int`，不會變成 `90.00`。畫面與報告都使用 `output.str()`，所以只要設定 `output` 一次。

## 一道練習

在 `student_average.cpp` 加入必要標頭，讓有學生時的**平均分數與中位數**都固定顯示兩位小數，其餘輸出順序不變：平均 → 中位數 → 最高分名字 → 排名。零人時仍只顯示「沒有學生」。

用輸入 `4 Amy 100 Bob 90 Cathy 80 Dan 0` 測試：前兩行應為 `67.50`、`85.00`。再用 `2 Amy 81 Bob 80` 測試：前兩行都應為 `80.50`。確認 `report.txt` 與畫面完全相同，排名中的整數分數不要多出小數位。

提示：在 `std::ostringstream output;` 建立之後、寫入平均數之前設定格式；不需要修改 `averageScore` 或 `medianScore` 的計算方式。
