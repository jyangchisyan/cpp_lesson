# 第 27 課：條件計數 `std::count_if`

[返回本類索引](README.md)

## 5 分鐘重點

`std::count_if` 對範圍內每個元素測試條件並計數。`[level]` 將外部門檻複製進 lambda；`>=` 會把剛好等於門檻的面積算進去。

```cpp
auto count = std::count_if(rectangles.begin(), rectangles.end(),
    [level](const Rectangle& rectangle) {
        return rectangle.area() >= level;
    });
```

## 一道練習

面積為 `6、12、20`，門檻 `12` 時答案應是 `2`。對照 [count_larger_rectangles.cpp](count_larger_rectangles.cpp)。
