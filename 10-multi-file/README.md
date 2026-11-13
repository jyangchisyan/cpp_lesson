# 多檔案程式

核取方框用來記錄重新閱讀的進度。標頭檔 `.h` 放宣告，來源檔 `.cpp` 放定義；編譯時需要列出所有包含實作的 `.cpp`。

- [ ] [**第 40 課：拆分自由函式**](lesson-40.md) — [math_utils.h](math_utils.h) 宣告 `square` 並用 `#pragma once` 避免重複包含；[math_utils.cpp](math_utils.cpp) 實作；[main.cpp](main.cpp) 讀數並呼叫。輸入 `7` 應得到 `49`。
- [ ] [**第 41 課：拆分類別**](rectangle/lesson-41.md) — 宣告成員於標頭檔，在來源檔以 `Rectangle::area()` 等語法定義。練習與編譯指令見 [rectangle/README.md](rectangle/README.md)。

第 40 課從本資料夾編譯：

```sh
cd 10-multi-file
g++ main.cpp math_utils.cpp -o app
./app
```

只編譯 `main.cpp` 會缺少 `square` 的實作。

[返回總索引](../README.md)
