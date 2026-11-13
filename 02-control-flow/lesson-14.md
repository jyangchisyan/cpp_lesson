# 第 14 課：輸入與除法檢查

[返回本類索引](README.md)

## 5 分鐘重點

先確認兩個數讀取成功，再檢查分母是否為零。兩個整數直接相除會先得到整數；要保留小數，**除之前**至少把一方轉為浮點數。

```cpp
if (!(std::cin >> numerator >> denominator)) {
    std::cerr << "輸入錯誤\n";
    return 1;
}
if (denominator == 0) {
    std::cerr << "不能除以零\n";
    return 1;
}
double answer = static_cast<double>(numerator) / denominator;
```

## 一道練習

完成安全除法：輸入 `7 2` 應得到 `3.5`，`8 0` 應顯示錯誤；非數字輸入也不能當作有效數值。對照 [safe_divide.cpp](safe_divide.cpp)。
