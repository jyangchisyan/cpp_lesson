# 第 51 課：抽出平均函式

[返回本類索引](README.md)

對照目前累積版本 [student_average.cpp](student_average.cpp)。

## 5 分鐘重點

把平均計算獨立成 `averageScore(const std::vector<Student>& students)`：唯讀參照避免複製資料，也不讓函式修改學生。呼叫前先處理空集合，避免分母為零；函式只負責計算，不負責輸出。

## 一道練習

抽取平均函式，兩筆分數 `80`、`90` 回傳 `85`；零位學生時主流程顯示「沒有學生」且不呼叫該函式。
