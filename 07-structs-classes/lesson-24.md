# 第 24 課：修改物件狀態

[返回本類索引](README.md)

## 5 分鐘重點

成員函式能改變物件的內部資料。`scale(factor)` 要同時改寬和高，不能標記 `const`；`area() const` 則保持唯讀。寬高都放大兩倍，面積會變為四倍。

```cpp
void scale(int factor) {
    width *= factor;
    height *= factor;
}
```

## 一道練習

建立 `3 × 5` 矩形，先輸出 `15`，再呼叫 `scale(2)` 並輸出 `60`。對照 [rectangle_scale.cpp](rectangle_scale.cpp)。
