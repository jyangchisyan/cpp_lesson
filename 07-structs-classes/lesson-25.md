# 第 25 課：用 `vector` 儲存物件

[返回本類索引](README.md)

## 5 分鐘重點

`std::vector<Rectangle>` 可以保存多個矩形。走訪時使用 `const Rectangle&`，避免複製物件；總面積從 `0` 開始累加，沒有矩形時仍為 `0`。

```cpp
int total = 0;
for (const Rectangle& rectangle : rectangles) {
    total += rectangle.area();
}
```

## 一道練習

輸入兩個矩形 `2 3`、`4 5`，總面積應是 `26`；也測零個矩形。對照 [rectangle_total.cpp](rectangle_total.cpp)。
