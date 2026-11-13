# 第 38 課：出現次數 `std::upper_bound`

[返回本類索引](README.md)

## 5 分鐘重點

排序後，相同數字會連在一起。`lower_bound` 指向第一個不小於目標的位置；`upper_bound` 指向第一個大於目標的位置；兩個迭代器的**位置差**就是出現次數。即使找不到，兩個位置相同，差仍為零。

```cpp
std::sort(numbers.begin(), numbers.end());
auto first = std::lower_bound(numbers.begin(), numbers.end(), target);
auto afterLast = std::upper_bound(numbers.begin(), numbers.end(), target);
std::cout << afterLast - first << '\n';
```

## 一道練習

資料 `5 2 5 7 5` 查 `5` 得 `3`，查 `6` 得 `0`。不要把迭代器解參照後的**數值**相減；對照 [count_occurrences.cpp](count_occurrences.cpp)。
