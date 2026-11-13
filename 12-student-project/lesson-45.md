# 第 45 課：找最高分學生

[返回本類索引](README.md)

共同練習檔 [student_average.cpp](student_average.cpp) 已進展到第 53 課；本課描述當時的做法。

## 5 分鐘重點

`std::max_element` 配合比較分數的 lambda，可回傳最高分學生的迭代器。空容器時結果為 `end()`，不可解參照；先處理無學生情況。後來課程先排序，所以最新版本改以 `front()` 取得第一名。

```cpp
auto top = std::max_element(students.begin(), students.end(),
    [](const Student& first, const Student& second) {
        return first.score < second.score;
    });
```

## 一道練習

在平均計算後找最高分者：`Amy 80`、`Bob 90` 應顯示 `Bob`；測試零位學生時不得取用 `top`。
