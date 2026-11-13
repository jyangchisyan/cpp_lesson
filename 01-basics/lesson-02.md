# 第 2 課：變數與輸入

[返回本類索引](README.md)

## 5 分鐘重點

`int` 儲存整數，`std::cin >> year >> age` 依序讀入兩個數；讀入之後才能計算。輸出時可交替接上文字與變數。

```cpp
int year, age;
std::cin >> year >> age;
std::cout << year + 5 << " " << age + 5 << '\n';
```

## 一道練習

輸入目前年份和年齡，印出五年後的年份和年齡。例如輸入 `2026 18`，兩個結果應是 `2031`、`23`。對照 [age.cpp](age.cpp)；在本資料夾編譯 `g++ age.cpp -o age` 後執行 `./age`。
