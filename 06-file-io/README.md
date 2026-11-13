# 檔案讀寫

核取方框用來記錄重新閱讀的進度。

- [ ] [**第 12 課：寫入再讀回**](lesson-12.md) — `std::ofstream` 寫檔，`std::ifstream` 讀檔；`std::getline` 保留空格。練習：[save_name.cpp](save_name.cpp) 將整行名字存入 `name.txt`，再讀回並顯示。
- [ ] [**第 13 課：檢查開檔**](lesson-13.md) — 使用 `if (!input)` 判斷檔案是否可讀；失敗時顯示訊息並提早結束。練習：[read_note.cpp](read_note.cpp) 讀取 `note.txt` 的第一整行，或顯示「找不到檔案」。

程式使用相對路徑，**從本資料夾執行**時，才會讀寫這裡的 `name.txt`、`note.txt`。`save_name.cpp` 每次執行都可能覆寫 `name.txt`。

```sh
cd 06-file-io
g++ read_note.cpp -o read_note
./read_note
```

[返回總索引](../README.md)
