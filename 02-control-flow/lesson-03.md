# 第 3 課：條件判斷 `if` / `else`

[返回本類索引](README.md)

## 5 分鐘重點

比較運算式的結果是「真」或「假」；`if` 在條件成立時執行，`else` 處理其他情況。`>=` 是大於或等於，邊界值也算符合。

```cpp
if (temperature >= 30) {
    std::cout << "天氣很熱\n";
} else {
    std::cout << "天氣還好\n";
}
```

## 一道練習

輸入溫度，判斷是否至少 30 度；分別用 `29`、`30` 測試邊界。對照 [temperature.cpp](temperature.cpp)；[score.cpp](score.cpp) 另示範分數的及格判斷。
