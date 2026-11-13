# C++ 離線基礎練習

課程按概念放在各資料夾的 `README.md`，包含課次、重點、對應練習與編譯範例。點選課次標題可閱讀獨立的五分鐘講義與一道練習。每課的 `- [ ]` 可自行勾選**重新閱讀**的進度；未勾選不代表練習尚未完成。建議複習時先不看舊程式，自己重寫一次。

| 課程分類 | 課次 |
| --- | --- |
| [基本輸入輸出、變數與字串](01-basics/README.md) | 1、2、7 |
| [條件判斷與迴圈](02-control-flow/README.md) | 3、4、8、14 |
| [函式、參照與指標](03-functions-references-pointers/README.md) | 5、15、16、19、21 |
| [陣列與基本容器](04-arrays-containers/README.md) | 6、9、10、20 |
| [`map` 與次數統計](05-maps-frequency/README.md) | 17、18 |
| [檔案讀寫](06-file-io/README.md) | 12、13 |
| [`struct`、`class` 與物件](07-structs-classes/README.md) | 11、22–25 |
| [標準演算法與 lambda](08-algorithms-lambdas/README.md) | 26–38 |
| [函式模板](09-templates/README.md) | 39 |
| [多檔案程式](10-multi-file/README.md) | 40、41（[類別分檔](10-multi-file/rectangle/README.md)） |
| [例外與錯誤處理](11-error-handling/README.md) | 42、43 |
| [學生資料小專題](12-student-project/README.md) | 44–59 |

## 編譯與執行

進入練習所在資料夾，再編譯和執行。例如：

```sh
cd 08-algorithms-lambdas
g++ replace_all.cpp -o replace_all
./replace_all
```

檔案讀寫練習使用相對路徑；請在 `06-file-io` 資料夾內執行，程式才會讀寫該處的 `name.txt` 或 `note.txt`。

多檔案練習需一起編譯兩個 `.cpp`：

```sh
cd 10-multi-file
g++ main.cpp math_utils.cpp -o app
./app
```

類別分檔練習則進入 `10-multi-file/rectangle/`，編譯 `main.cpp` 和 `rectangle.cpp`。

