# 第 18 課：走訪 `std::map`

[返回本類索引](README.md)

## 5 分鐘重點

走訪 `map` 時，每一筆有 `first`（鍵）與 `second`（值）。`std::map` 按鍵的大小走訪，因此不用另行排序就能依數字升序印出次數。

```cpp
for (const auto& entry : frequency) {
    std::cout << entry.first << ' ' << entry.second << '\n';
}
```

## 一道練習

先輸入個數，再輸入六個整數：`6 3 1 3 2 1 3`。逐行輸出每個不同值及其次數；預期順序是 `1 2`、`2 1`、`3 3`。對照 [frequency_all.cpp](frequency_all.cpp)。
