# 第 10 課：排序 `std::sort`

[返回本類索引](README.md)

## 5 分鐘重點

`std::sort(numbers.begin(), numbers.end())` 預設升序排列。若想降序輸出，可以排序後從尾端往前讀，或提供比較規則；第一種方法不需要額外的 lambda。

```cpp
std::sort(numbers.begin(), numbers.end());
for (auto result = numbers.rbegin(); result != numbers.rend(); ++result) {
    std::cout << *result << ' ';
}
```

## 一道練習

先輸入個數，再輸入整數，從大到小印出；輸入 `4 4 1 7 1` 應為 `7 4 1 1`。對照 [sort_numbers.cpp](sort_numbers.cpp)。
