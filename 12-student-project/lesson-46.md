# 第 46 課：依分數排名

[返回本類索引](README.md)

共同練習檔 [student_average.cpp](student_average.cpp) 是最新的累積版本；此課先只按分數排名，姓名同分排序於第 53 課加入。

## 5 分鐘重點

`std::sort` 的比較函式回傳 `first.score > second.score`，表示高分排前。排序後依序輸出平均、最高分學生名字、每位學生的名字和分數；只有非空時才能使用 `front()`。

## 一道練習

輸入 `Amy 80`、`Bob 90`、`Cathy 70`，排名應為 Bob、Amy、Cathy。先自己寫比較 lambda，再檢查結果是否符合降序。
