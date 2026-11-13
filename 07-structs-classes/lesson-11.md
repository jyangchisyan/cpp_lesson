# 第 11 課：用 `struct` 組合資料

[返回本類索引](README.md)

## 5 分鐘重點

`struct` 將相關欄位放在同一個物件中，例如學生的名字與分數；用 `student.score` 取欄位。比較學生時比的是分數，輸出的是對應的名字。

```cpp
struct Student {
    std::string name;
    int score;
};
```

## 一道練習

讀入兩位學生的名字和分數，印出較高分者的名字；例如 `Amy 80` 與 `Bob 90`，結果是 `Bob`。對照 [top_student.cpp](top_student.cpp)。
