# 第 43 課：`vector::at()` 與索引錯誤

[返回本類索引](README.md)

## 5 分鐘重點

`numbers[index]` 不會替你檢查越界；`numbers.at(index)` 會檢查，無效索引時拋出 `std::out_of_range`。用 `try` / `catch` 呈現清楚的錯誤訊息，避免把無效位置當成資料。

```cpp
try {
    std::cout << numbers.at(index) << '\n';
} catch (const std::out_of_range& error) {
    std::cout << "索引超出範圍\n";
}
```

## 一道練習

讀取一個索引，合法時印出元素，越界時印出「索引超出範圍」。測第一個、最後一個及超出尾端的位置。對照 [safe_index.cpp](safe_index.cpp)。
