# 第 30 課：替換全部 `std::replace`

[返回本類索引](README.md)

## 5 分鐘重點

`std::replace(begin, end, oldValue, newValue)` 逐項檢查指定範圍，把**所有**相符的舊值改掉；不會增加或刪除元素。

```cpp
std::replace(numbers.begin(), numbers.end(), 2, 9);
// 2 5 2 -> 9 5 9
```

## 一道練習

讀入清單、舊值和新值，印出全部替換後的清單；也測沒有舊值的情況。對照 [replace_all.cpp](replace_all.cpp)。
