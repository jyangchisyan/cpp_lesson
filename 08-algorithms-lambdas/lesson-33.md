# 第 33 課：依條件刪除 `std::remove_if`

[返回本類索引](README.md)

## 5 分鐘重點

`remove_if` 的 lambda 回傳 `true` 表示該元素要移除；門檻在外部時，用 `[level]` 捕捉。它也只給出新邏輯結尾，仍需搭配 `erase`。

```cpp
auto newEnd = std::remove_if(numbers.begin(), numbers.end(),
    [level](int value) { return value < level; });
numbers.erase(newEnd, numbers.end());
```

## 一道練習

資料 `2 5 7 3`、門檻 `5`，應保留 `5 7`；注意等於門檻的值要留下。對照 [remove_below.cpp](remove_below.cpp)。
