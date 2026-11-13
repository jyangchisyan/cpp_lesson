# 第 29 課：用迭代器修改第一個元素

[返回本類索引](README.md)

## 5 分鐘重點

`std::find` 找第一個與指定值相同的元素。迭代器不是值本身；`*result` 才是找到的元素，因此賦值要寫在解參照後，且不能對 `end()` 解參照。

```cpp
auto result = std::find(numbers.begin(), numbers.end(), oldValue);
if (result != numbers.end()) *result = newValue;
```

## 一道練習

把 `2 5 2` 中第一個 `2` 改為 `9`，結果應為 `9 5 2`；找不到時不更動。對照 [replace_first.cpp](replace_first.cpp)。
