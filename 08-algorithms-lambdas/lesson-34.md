# 第 34 課：逐一轉換 `std::transform`

[返回本類索引](README.md)

## 5 分鐘重點

`transform` 依序把每個輸入套用函式，將結果寫到指定位置。輸出起點設為同一容器的 `begin()`，就能原地更新，每項仍占一個位置。

```cpp
std::transform(numbers.begin(), numbers.end(), numbers.begin(),
    [](int value) { return value * value; });
```

## 一道練習

把 `-2 0 3` 變成 `4 0 9` 並印出。對照 [square_all.cpp](square_all.cpp)。
