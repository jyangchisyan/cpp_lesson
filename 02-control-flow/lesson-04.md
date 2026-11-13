# 第 4 課：`for` 迴圈

[返回本類索引](README.md)

## 5 分鐘重點

知道重複次數時可用 `for (起始值; 持續條件; 每次更新)`。累加器先設為 `0`，每輪把目前數字加進去。

```cpp
int total = 0;
for (int number = 1; number <= limit; ++number) {
    total += number;
}
```

## 一道練習

輸入正整數 `n`，計算 `1 + 2 + ... + n`。例如 `5` 得到 `15`；也試 `1`。對照 [sum.cpp](sum.cpp)。
