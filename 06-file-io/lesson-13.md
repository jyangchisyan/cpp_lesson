# 第 13 課：檢查開檔是否成功

[返回本類索引](README.md)

## 5 分鐘重點

開檔不保證成功，例如檔案不存在或路徑不對。先用 `if (!input)` 判斷；成功才呼叫 `std::getline`。提前結束比繼續處理空資料安全。

```cpp
std::ifstream input("note.txt");
if (!input) {
    std::cout << "找不到檔案\n";
    return 1;
}
```

## 一道練習

有 `note.txt` 時印出第一整行；沒有時顯示「找不到檔案」。在本資料夾測試兩種情況；對照 [read_note.cpp](read_note.cpp)。
