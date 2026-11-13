# 第 17 課：`std::map` 的鍵與值

[返回本類索引](README.md)

## 5 分鐘重點

`std::map<int, int>` 可把每個整數（鍵）對應到出現次數（值）。`frequency[value]++` 若鍵不存在，先建立值為零的項目再加一；查詢未出現的值會得到零。

```cpp
std::map<int, int> frequency;
for (int value : numbers) ++frequency[value];
std::cout << frequency[target] << '\n';
```

## 一道練習

讀入數字清單和一個查詢值，印出它出現幾次。清單 `2 3 2 2` 查 `2` 得 `3`，查 `5` 得 `0`。對照 [frequency.cpp](frequency.cpp)。
