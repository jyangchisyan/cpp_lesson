# 第 15 課：參照參數 `&`

[返回本類索引](README.md)

## 5 分鐘重點

一般參數是副本；`int& first` 是原變數的另一個名字，函式內修改它會影響呼叫者。交換時需先保存其中一個舊值。

```cpp
void swapNumbers(int& first, int& second) {
    int temporary = first;
    first = second;
    second = temporary;
}
```

## 一道練習

輸入 `10 40`，呼叫交換函式後應依序得到 `40 10`。說明如果沒有 `&` 為何原變數不會改變。對照 [swap_numbers.cpp](swap_numbers.cpp)。
