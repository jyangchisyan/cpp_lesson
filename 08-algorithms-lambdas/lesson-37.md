# 第 37 課：第一個位置 `std::lower_bound`

[返回本類索引](README.md)

## 5 分鐘重點

先升序排序；`lower_bound` 回傳第一個**大於或等於**查詢值的位置，不保證該位置真的等於目標。先確認不等於 `end()` 且 `*result == target`，再用 `result - numbers.begin()` 算零起算索引。

```cpp
auto result = std::lower_bound(numbers.begin(), numbers.end(), target);
int index = (result != numbers.end() && *result == target)
    ? static_cast<int>(result - numbers.begin()) : -1;
```

## 一道練習

排序後的 `2 5 5 7` 查 `5` 得索引 `1`，查 `6` 得 `-1`。對照 [first_position.cpp](first_position.cpp)。
