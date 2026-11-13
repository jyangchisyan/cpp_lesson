# 第 35 課：加總 `std::accumulate`

[返回本類索引](README.md)

## 5 分鐘重點

`std::accumulate` 在 `<numeric>` 中；第三參數是加總初值，空集合會直接回傳此值。可先用 `transform` 求每項平方，再以 `accumulate` 求平方和。

```cpp
std::transform(numbers.begin(), numbers.end(), numbers.begin(),
    [](int value) { return value * value; });
int total = std::accumulate(numbers.begin(), numbers.end(), 0);
```

## 一道練習

輸入 `-2 3` 得平方和 `13`；空清單結果為 `0`。對照 [sum_square.cpp](sum_square.cpp)。
