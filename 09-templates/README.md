# 函式模板

核取方框用來記錄重新閱讀的進度。

- [ ] [**第 39 課：`template <typename ValueType>`**](lesson-39.md) — 同一份函式邏輯可作用在不同型別；呼叫時由參數推導 `ValueType`。練習：[min_of_two.cpp](min_of_two.cpp) 實作 `smaller`，分別比較兩個整數和兩個小數。`first < second ? first : second` 依條件選擇回傳值。

```sh
cd 09-templates
g++ min_of_two.cpp -o min_of_two
./min_of_two
```

[返回總索引](../README.md)
