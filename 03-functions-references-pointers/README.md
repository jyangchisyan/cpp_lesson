# 函式、參照與指標

核取方框用來記錄重新閱讀的進度。

- [ ] [**第 5 課：函式與回傳值**](lesson-05.md) — 參數讓函式接收資料，`return` 把結果交回呼叫者。練習：[double.cpp](double.cpp) 實作 `doubleNumber`，回傳整數的兩倍。
- [ ] [**第 15 課：參照參數 `&`**](lesson-15.md) — `int&` 讓函式修改呼叫者的原變數。練習：[swap_numbers.cpp](swap_numbers.cpp) 用暫存變數交換兩個整數。
- [ ] [**第 16 課：唯讀參照 `const &`**](lesson-16.md) — 傳入容器時避免複製，也保證函式不修改它。練習：[count_even.cpp](count_even.cpp) 計算 `vector` 中偶數個數；`0` 與負偶數也要算。
- [ ] [**第 19 課：位址與指標**](lesson-19.md) — `&value` 取得位址，`int* pointer` 宣告指標，`*pointer` 讀取或修改指向的值。練習：[pointer_add.cpp](pointer_add.cpp) 用 `addTen(&value)` 修改原變數。
- [ ] [**第 21 課：空指標 `nullptr`**](lesson-21.md) — 指標可不指向物件；取用 `*pointer` 前須確認不是 `nullptr`。練習：[safe_pointer.cpp](safe_pointer.cpp) 依有效指標或空指標輸出兩倍數值或「沒有數值」。

```sh
cd 03-functions-references-pointers
g++ pointer_add.cpp -o pointer_add
./pointer_add
```

[返回總索引](../README.md)
