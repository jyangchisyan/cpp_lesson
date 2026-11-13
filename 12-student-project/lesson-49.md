# 第 49 課：檢查報告是否可寫

[返回本類索引](README.md)

對照目前累積版本 [student_average.cpp](student_average.cpp)。

## 5 分鐘重點

即使輸入正確，開檔也可能失敗。建立 `std::ofstream report("report.txt")` 後，先用 `if (!report)` 檢查；失敗則向 `std::cerr` 印出「無法寫入報告」，並以非零狀態 `return 1` 結束，避免假裝報告已成功保存。

## 一道練習

加入開檔失敗分支；說明為何不能先輸出「儲存成功」再檢查檔案。正常執行時確認 `report.txt` 確實出現。
