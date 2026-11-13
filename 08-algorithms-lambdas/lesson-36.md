# 第 36 課：`std::binary_search`

[返回本類索引](README.md)

## 5 分鐘重點

二分搜尋每次排除一半候選範圍，**前提是資料已按照相同規則排序**。`binary_search` 只回答有沒有，回傳布林值，不回傳位置。

```cpp
std::sort(numbers.begin(), numbers.end());
bool found = std::binary_search(numbers.begin(), numbers.end(), target);
```

## 一道練習

先排序清單 `7 2 5`，查 `5` 應找到，查 `4` 應找不到。對照 [binary_search.cpp](binary_search.cpp)。
