# 第 23 課：建構函式

[返回本類索引](README.md)

## 5 分鐘重點

建構函式與類別同名，建立物件時執行。成員初始化列表 `: width(widthValue), height(heightValue)` 在函式主體執行前初始化欄位；`area() const` 只計算、不修改尺寸。

```cpp
Rectangle(int widthValue, int heightValue)
    : width(widthValue), height(heightValue) {}
int area() const { return width * height; }
```

## 一道練習

輸入寬 `3`、高 `5`，建立矩形並輸出面積 `15`。對照 [rectangle.cpp](rectangle.cpp)。
