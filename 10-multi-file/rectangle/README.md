# 第 41 課：類別分檔練習

- [ ] [**重新閱讀第 41 課**](lesson-41.md) — [rectangle.h](rectangle.h) 宣告建構函式、`area() const` 與私有尺寸；[rectangle.cpp](rectangle.cpp) 用 `Rectangle::` 定義成員；[main.cpp](main.cpp) 讀入寬和高，建立物件並印出面積。輸入 `3 5` 應印出 `15`。

從本資料夾編譯時，須同時指定兩個來源檔：

```sh
cd 10-multi-file/rectangle
g++ main.cpp rectangle.cpp -o rectangle
./rectangle
```

[返回多檔案課程](../README.md) · [返回總索引](../../README.md)
