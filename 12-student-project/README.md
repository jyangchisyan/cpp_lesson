# 學生資料小專題：第 44–53 課

這十課都逐步修改同一份 [student_average.cpp](student_average.cpp)；目前檔案是**最新版本**，不是每一課各自的歷史快照。核取方框用來記錄重新閱讀的進度。

- [ ] [**第 44 課：收集學生與平均分數**](lesson-44.md) — `Student` 將名字和分數組合，`vector<Student>` 儲存多筆資料；浮點除法算平均，`n = 0` 顯示「沒有學生」。
- [ ] [**第 45 課：找最高分**](lesson-45.md) — 用 `std::max_element` 比較分數，印出最高分學生名字；只在非空時取用結果。後續課程改成先排序再用 `front()`。
- [ ] [**第 46 課：依分數排名**](lesson-46.md) — 使用 `std::sort`，分數高者排前；平均、最高分名字、各學生排名依序輸出。
- [ ] [**第 47 課：寫入報告**](lesson-47.md) — `std::ofstream("report.txt")` 同時把相同分析結果寫入檔案；空集合時檔案只寫「沒有學生」。
- [ ] [**第 48 課：組合一次、輸出兩處**](lesson-48.md) — `std::ostringstream` 先組成完整報告，`output.str()` 共用於 `std::cout` 與檔案，避免內容重複維護。
- [ ] [**第 49 課：檢查報告可寫**](lesson-49.md) — `if (!report)` 時將「無法寫入報告」送至 `std::cerr`，以 `return 1` 結束。
- [ ] [**第 50 課：驗證輸入**](lesson-50.md) — 檢查學生數量與每筆名字、分數；無效資料先印「輸入錯誤」並結束，不覆寫舊報告。
- [ ] [**第 51 課：抽出平均函式**](lesson-51.md) — `averageScore(const std::vector<Student>&)` 只讀學生資料；非空時才呼叫，避免除以零。
- [ ] [**第 52 課：抽出排序函式**](lesson-52.md) — `sortByScore(std::vector<Student>&)` 修改容器次序，因此參數不能加 `const`。
- [ ] [**第 53 課：同分以名字排序**](lesson-53.md) — 比較時先按分數降序，再按名字升序；排序後用 `students.front().name` 當最高分名字，空集合不可取 `front()`。

目前有學生時的輸出順序是：**平均分數 → 最高分名字 → 每位學生的「名字 分數」**。例如輸入 `3`、`Bob 90`、`Amy 90`、`Cathy 80`，前兩個排名是 `Amy 90`、`Bob 90`。

在本資料夾編譯與執行，`report.txt` 才會產生在這裡；有效執行會覆寫舊報告：

```sh
cd 12-student-project
g++ student_average.cpp -o student_average
./student_average
```

[返回總索引](../README.md)
