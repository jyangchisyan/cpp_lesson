# 第 8 課：`while` 迴圈與結束值

[返回本類索引](README.md)

## 5 分鐘重點

不知道會輸入幾次時，可一直讀取，遇到特定結束值再停止。`0` 是結束訊號，不加入總和；每一輪都必須取得新輸入，避免無限迴圈。

```cpp
int value, total = 0;
while (std::cin >> value && value != 0) {
    total += value;
}
```

## 一道練習

持續輸入整數直到 `0`，輸出總和。輸入 `3 -1 4 0` 應得到 `6`。對照 [sum_until_zero.cpp](sum_until_zero.cpp)。
