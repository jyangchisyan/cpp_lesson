# 第 65 課：一個指令重跑所有測試

[返回本類索引](README.md)

## 這課要學什麼

第 62、64 課各有一份測試程式。每次修改後若只執行其中一份，可能漏掉另一個問題。這一課用簡短的 shell 腳本，把「編譯 → 執行」依順序寫下來，之後一個指令就能重跑。

## 5 分鐘重點

### 1. 每份測試各自編譯

[pass_test.cpp](pass_test.cpp) 和 [score_range_test.cpp](score_range_test.cpp) 都有自己的 `main()`。不要把兩份 `.cpp` 放進同一次 `g++` 指令，否則會有兩個程式入口；應分別產生 `pass_test` 與 `score_range_test`，再分別執行。

### 2. 依序寫在腳本中

腳本是純文字檔，例如 `run_tests.sh`。從本資料夾執行 `sh run_tests.sh`，shell 便會依序執行每一行。先看前半段：

```sh
set -e
g++ -std=c++17 -Wall -Wextra pass_test.cpp -o pass_test
./pass_test
```

`set -e` 在這種逐行執行的腳本中，讓編譯或測試指令失敗時停止。`assert` 失敗會讓測試程式以非零狀態結束，後面的測試和「全部測試通過」就不應再執行。要把成功訊息放在**所有測試之後**，不能放在開頭。

### 3. 分清楚「編譯成功」與「測試成功」

編譯成功只是產生執行檔；還要執行它，才會檢查 `assert`。`-Wall -Wextra` 會顯示警告，但警告本身通常不會使腳本停止；若看到警告，仍應回到第 63 課的方法排查。

## 一道練習

在 `13-testing/` 自行建立 `run_tests.sh`：先寫上述三行，再加入**編譯與執行** `score_range_test.cpp` 的兩行，最後才印出「全部測試通過」。從專案根目錄執行：

```sh
cd 13-testing
sh run_tests.sh
```

正常情況應依序看到「測試通過」、「邊界測試通過」、「全部測試通過」。再暫時讓 [score_range_test.cpp](score_range_test.cpp) 的一個斷言失敗，重新執行腳本：這次**不能**看到「全部測試通過」。觀察後記得恢復原本的斷言。

提示：第二份測試的編譯指令與第一份格式相同，只需換來源檔和輸出檔名稱。`sh run_tests.sh` 不需要先設定腳本的執行權限。
