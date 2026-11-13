# 陣列與基本容器

核取方框用來記錄重新閱讀的進度。

- [ ] [**第 6 課：固定大小陣列**](lesson-06.md) — 陣列索引從 `0` 開始；最大值應初始化為第一個元素，而非 `0`，以處理全負數。練習：[maximum.cpp](maximum.cpp) 找出五個整數的最大值。
- [ ] [**第 9 課：動態大小 `std::vector`**](lesson-09.md) — `push_back` 加入元素，`size()` 取得數量，索引也從 `0` 開始。練習：[reverse.cpp](reverse.cpp) 輸入 `n` 個整數並倒序輸出。
- [ ] [**第 10 課：排序 `std::sort`**](lesson-10.md) — `sort(begin, end)` 預設由小到大；由尾端往前印可得到由大到小的結果。練習：[sort_numbers.cpp](sort_numbers.cpp) 對輸入數字降序輸出。
- [ ] [**第 20 課：不重複的 `std::set`**](lesson-20.md) — `insert` 不會加入重複值；走訪時依數值由小到大排列，`size()` 是不同值的數量。練習：[unique_numbers.cpp](unique_numbers.cpp) 輸出個數與各個不同整數。

```sh
cd 04-arrays-containers
g++ unique_numbers.cpp -o unique_numbers
./unique_numbers
```

[返回總索引](../README.md)
