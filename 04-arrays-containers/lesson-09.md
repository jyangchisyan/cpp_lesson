# 第 9 課：動態陣列 `std::vector`

[返回本類索引](README.md)

## 5 分鐘重點

`std::vector<int>` 可隨輸入逐項增加。`push_back(value)` 加到尾端；最後一個索引是 `size() - 1`，但空容器沒有最後一個元素，倒序走訪時要避開索引下溢。

```cpp
std::vector<int> numbers;
numbers.push_back(3);
numbers.push_back(8);
// 倒序輸出可用反向迭代器：rbegin() 到 rend()
```

## 一道練習

先讀 `n`，再讀 `n` 個數字，倒序印出。輸入 `3 10 20 30` 應印 `30 20 10`；也測 `n = 0`。對照 [reverse.cpp](reverse.cpp)。
