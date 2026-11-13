# 第 16 課：唯讀參照 `const &`

[返回本類索引](README.md)

## 5 分鐘重點

大型容器傳值會複製整份資料；`const std::vector<int>&` 不複製，也禁止函式修改原容器。偶數判斷為 `value % 2 == 0`，`0` 與負的偶數也符合。

```cpp
int countEven(const std::vector<int>& numbers) {
    int count = 0;
    for (int value : numbers) {
        if (value % 2 == 0) ++count;
    }
    return count;
}
```

## 一道練習

讀入一組整數並計算偶數數量；`-2 0 3 4` 的答案是 `3`。對照 [count_even.cpp](count_even.cpp)。
