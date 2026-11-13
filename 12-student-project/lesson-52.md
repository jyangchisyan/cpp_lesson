# 第 52 課：抽出排序函式

[返回本類索引](README.md)

對照目前累積版本 [student_average.cpp](student_average.cpp)；第 53 課又為同分加入姓名規則。

## 5 分鐘重點

把排序邏輯放進 `sortByScore(std::vector<Student>& students)`。排序會改變原容器的次序，因此必須用可修改的參照 `&`，不能用 `const &`。呼叫後 `students.front()` 即是第一名，但空集合須先排除。

## 一道練習

抽取排序函式，輸入分數 `60、90、75` 後應依序為 `90、75、60`；確認呼叫者持有的原容器也變為新順序。
