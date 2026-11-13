# 第 5 課：函式與回傳值

[返回本類索引](README.md)

## 5 分鐘重點

函式把一項工作命名並重複使用。參數是呼叫時帶入的資料；`return` 把結果交還呼叫處，不等於直接印出結果。

```cpp
int doubleNumber(int value) {
    return value * 2;
}
// 呼叫：std::cout << doubleNumber(7);  // 14
```

## 一道練習

實作 `doubleNumber`，輸入整數後由 `main` 呼叫並印出兩倍。用 `7` 和 `-3` 測試。對照 [double.cpp](double.cpp)。
