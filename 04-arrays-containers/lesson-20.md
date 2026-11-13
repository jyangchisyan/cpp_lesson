# 第 20 課：不重複的 `std::set`

[返回本類索引](README.md)

## 5 分鐘重點

`std::set<int>` 只保留不同的值；`insert` 遇到重複值不新增。`size()` 是**不同數字的個數**，走訪時會依升序列出。

```cpp
std::set<int> uniqueNumbers;
uniqueNumbers.insert(4);
uniqueNumbers.insert(4);
uniqueNumbers.insert(2);
// size() 為 2；走訪順序為 2、4
```

## 一道練習

讀入 `n` 個整數，先印不同數字的個數，再印所有不同值。輸入 `5 4 2 4 2 9`，個數應是 `3`。對照 [unique_numbers.cpp](unique_numbers.cpp)。
