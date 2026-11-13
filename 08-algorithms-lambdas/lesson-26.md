# 第 26 課：自訂排序 `std::sort`

[返回本類索引](README.md)

## 5 分鐘重點

`std::sort(begin, end, compare)` 根據比較函式排序。比較函式收到兩個元素，回傳 `true` 代表第一個應排在第二個前面；lambda 是可直接寫在呼叫處的短函式。

```cpp
std::sort(rectangles.begin(), rectangles.end(),
    [](const Rectangle& first, const Rectangle& second) {
        return first.area() < second.area();
    });
```

## 一道練習

讀入多個矩形，按面積由小到大逐行輸出。面積 `12、6、20` 應輸出 `6、12、20`。對照 [sort_rectangles.cpp](sort_rectangles.cpp)。
