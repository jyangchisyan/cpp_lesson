# 第 47 課：寫入報告

[返回本類索引](README.md)

共同練習檔 [student_average.cpp](student_average.cpp) 已包含後續改善；本課先練習基本檔案輸出。

## 5 分鐘重點

`std::ofstream report("report.txt")` 建立或覆寫報告。輸出到畫面的平均、最高分及排名，也寫到檔案；無學生時報告只寫「沒有學生」。相對路徑由執行時所在資料夾決定。

## 一道練習

在 `12-student-project` 執行程式，檢查 `report.txt` 與畫面分析結果相同；再輸入 `0`，確認報告沒有舊排名。注意執行會覆寫原報告。
