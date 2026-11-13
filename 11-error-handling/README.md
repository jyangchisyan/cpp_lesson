# 例外與錯誤處理

核取方框用來記錄重新閱讀的進度。

- [ ] [**第 42 課：`throw` / `try` / `catch`**](lesson-42.md) — 遇到零分母時拋出 `std::invalid_argument`；`catch` 接住後由 `error.what()` 取得訊息。練習：[safe_divide_exception.cpp](safe_divide_exception.cpp) 輸入 `7 2` 得到 `3.5`，`8 0` 顯示「不能除以零」。
- [ ] [**第 43 課：`vector::at()`**](lesson-43.md) — 與 `[]` 不同，`at(index)` 會檢查索引；超出範圍時拋出 `std::out_of_range`。練習：[safe_index.cpp](safe_index.cpp) 印出元素或「索引超出範圍」。

```sh
cd 11-error-handling
g++ safe_index.cpp -o safe_index
./safe_index
```

[返回總索引](../README.md)
