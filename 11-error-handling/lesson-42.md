# 第 42 課：`throw` / `try` / `catch`

[返回本類索引](README.md)

## 5 分鐘重點

函式遇到不能繼續計算的情況可 `throw std::invalid_argument(...)`；呼叫處用 `try` 包住工作，用對應的 `catch` 處理錯誤，`error.what()` 取得原因。檢查零分母後再做浮點除法。

```cpp
if (denominator == 0) {
    throw std::invalid_argument("不能除以零");
}
return static_cast<double>(numerator) / denominator;
```

## 一道練習

完成有例外處理的除法；輸入 `7 2` 應得 `3.5`，輸入 `8 0` 應顯示「不能除以零」。對照 [safe_divide_exception.cpp](safe_divide_exception.cpp)。
