# 第 41 課：類別分檔

[返回本類索引](README.md) · [返回多檔案課程](../README.md)

## 5 分鐘重點

[rectangle.h](rectangle.h) 宣告 `Rectangle` 的公開建構函式、`area() const` 及私有寬高；[rectangle.cpp](rectangle.cpp) 定義成員，定義時寫 `Rectangle::area()` 表示它屬於此類別；[main.cpp](main.cpp) 建立並使用物件。編譯要包含兩個來源檔，標頭不需獨立編譯。

```sh
g++ main.cpp rectangle.cpp -o rectangle
./rectangle
```

## 一道練習

從本資料夾編譯、執行；輸入寬 `3`、高 `5`，結果應為 `15`。試著指出「宣告」與「定義」分別在哪個檔案。
