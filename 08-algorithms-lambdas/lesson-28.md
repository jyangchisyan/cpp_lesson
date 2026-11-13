# 第 28 課：`std::find_if` 找第一個符合者

[返回本類索引](README.md)

## 5 分鐘重點

`find_if` 從前往後找，找到時回傳指向該元素的迭代器；找不到時回傳 `end()`。一定要先檢查，再用 `result->area()` 或 `(*result).area()` 讀取。

```cpp
auto result = std::find_if(rectangles.begin(), rectangles.end(),
    [level](const Rectangle& rectangle) { return rectangle.area() >= level; });
if (result != rectangles.end()) std::cout << result->area();
```

## 一道練習

按輸入順序找第一個面積達門檻的矩形，不是找最小面積者；也測沒有符合者。對照 [find_rectangle.cpp](find_rectangle.cpp)。
