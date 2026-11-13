# 第 39 課：函式模板

[返回本類索引](README.md)

## 5 分鐘重點

函式模板以型別參數代替固定型別，讓一份比較邏輯可用於 `int`、`double` 等型別。呼叫 `smaller(3, 5)` 時，編譯器從參數推導型別；兩參數型別不同時可能需要先統一型別。

```cpp
template <typename ValueType>
ValueType smaller(ValueType first, ValueType second) {
    return first < second ? first : second;
}
```

## 一道練習

分別輸入兩個整數、兩個小數，使用同一個 `smaller` 印出較小者。例如 `3 5` 得 `3`、`2.5 1.5` 得 `1.5`。對照 [min_of_two.cpp](min_of_two.cpp)。
