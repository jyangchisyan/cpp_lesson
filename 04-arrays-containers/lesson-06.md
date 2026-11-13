# 第 6 課：固定大小陣列

[返回本類索引](README.md)

## 5 分鐘重點

`int numbers[5]` 有五個元素，索引是 `0` 到 `4`。找最大值時先取第一個元素，不要預設為零，否則全是負數會得出錯誤答案。

```cpp
int maximum = numbers[0];
for (int index = 1; index < 5; ++index) {
    if (numbers[index] > maximum) maximum = numbers[index];
}
```

## 一道練習

輸入五個整數並印出最大值；`-8 -2 -9 -4 -6` 應得到 `-2`。對照 [maximum.cpp](maximum.cpp)。
