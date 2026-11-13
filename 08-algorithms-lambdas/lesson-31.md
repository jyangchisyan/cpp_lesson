# 第 31 課：刪除第一個元素

[返回本類索引](README.md)

## 5 分鐘重點

先用 `std::find` 找到第一個指定值，再呼叫 `numbers.erase(result)`。若找不到，迭代器是 `end()`，不可傳給單一元素的 `erase`；刪除後舊迭代器也不宜再使用。

```cpp
auto result = std::find(numbers.begin(), numbers.end(), target);
if (result != numbers.end()) numbers.erase(result);
```

## 一道練習

從 `2 5 2` 移除第一個 `2`，應剩 `5 2`；也測找不到的情況。對照 [remove_first.cpp](remove_first.cpp)。
