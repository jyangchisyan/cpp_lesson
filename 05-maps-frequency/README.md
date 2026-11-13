# `std::map` 與次數統計

核取方框用來記錄重新閱讀的進度。

- [ ] [**第 17 課：鍵與值**](lesson-17.md) — `std::map<int, int>` 將整數對應到次數；不存在的鍵使用 `frequency[value]` 時，會建立初值為 `0` 的項目。練習：[frequency.cpp](frequency.cpp) 用 `frequency[value]++` 統計，再查詢一個數字的次數。
- [ ] [**第 18 課：走訪 `map`**](lesson-18.md) — `entry.first` 是鍵、`entry.second` 是值；`std::map` 依鍵的順序走訪。練習：[frequency_all.cpp](frequency_all.cpp) 由小到大列出每個不同整數及其出現次數。

```sh
cd 05-maps-frequency
g++ frequency_all.cpp -o frequency_all
./frequency_all
```

[返回總索引](../README.md)
