# 條件判斷、迴圈與輸入檢查

核取方框用來記錄重新閱讀的進度。

- [ ] [**第 3 課：`if` / `else`**](lesson-03.md) — 條件成立才執行 `if`；否則執行 `else`。[score.cpp](score.cpp) 是及格判斷示範；練習：[temperature.cpp](temperature.cpp) 以 `>= 30` 判斷天氣。
- [ ] [**第 4 課：`for` 迴圈**](lesson-04.md) — 初始化、繼續條件、每次更新，適合已知次數的重複工作。練習：[sum.cpp](sum.cpp) 計算 `1 + 2 + ... + n`，累加器從 `0` 開始。
- [ ] [**第 8 課：`while` 迴圈**](lesson-08.md) — 只要條件成立就繼續；迴圈內要更新條件相關的值。練習：[sum_until_zero.cpp](sum_until_zero.cpp) 持續加總輸入，遇到 `0` 停止。
- [ ] [**第 14 課：輸入與除法檢查**](lesson-14.md) — `if (!(std::cin >> value))` 檢查讀取失敗；除法前檢查分母。整數相除會先截去小數，需在除法前轉為浮點數。練習：[safe_divide.cpp](safe_divide.cpp) 處理錯誤輸入、零分母與小數結果。

```sh
cd 02-control-flow
g++ safe_divide.cpp -o safe_divide
./safe_divide
```

[返回總索引](../README.md)
