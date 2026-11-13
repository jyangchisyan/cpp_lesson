# 第 40 課：自由函式分檔

[返回本類索引](README.md)

## 5 分鐘重點

標頭檔 [math_utils.h](math_utils.h) 放 `square` 的宣告；[math_utils.cpp](math_utils.cpp) 放實作；[main.cpp](main.cpp) 包含標頭、讀取輸入並呼叫函式。`#pragma once` 避免標頭重複包含。只有宣告而未一起編譯實作，連結時會找不到定義。

```sh
g++ main.cpp math_utils.cpp -o app
./app
```

## 一道練習

從本資料夾編譯兩份 `.cpp`，輸入 `7` 應得到平方 `49`。再試只編譯 `main.cpp`，觀察連結錯誤並說明原因。
