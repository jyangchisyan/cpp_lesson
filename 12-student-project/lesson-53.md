# 第 53 課：同分以名字排序

[返回本類索引](README.md)

這是共同練習檔 [student_average.cpp](student_average.cpp) 目前的最新階段。

## 5 分鐘重點

比較兩位學生：分數不同時高分先；**只有分數相同**才比較名字，以字典順序升序排列。排序完成後，非空容器的 `students.front().name` 就是報告中的最高分名字；若仍另用只比較分數的 `max_element`，同分時可能與排名第一名不一致。

```cpp
if (first.score != second.score) return first.score > second.score;
return first.name < second.name;
```

## 一道練習

輸入 `3`、`Bob 90`、`Amy 90`、`Cathy 80`。預設輸出精度下平均為 `86.6667`；最高分名字應為 `Amy`，排名依序 `Amy 90`、`Bob 90`、`Cathy 80`。再輸入 `0`，確認不會呼叫空容器的 `front()`。
