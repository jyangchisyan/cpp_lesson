# 測試與除錯

從第 62 課開始，練習不只看程式「能跑」，還要用具體測試確認結果。核取方框用來記錄重新閱讀的進度，不代表練習尚未完成。

- [ ] [**第 62 課：用 `assert` 檢查函式結果**](lesson-62.md) — 以斷言檢查預期值，測試及格判斷在 `59`、`60` 等邊界分數是否正確。練習：[pass_test.cpp](pass_test.cpp)。
- [ ] [**第 63 課：閱讀編譯警告**](lesson-63.md) — 用 `-Wall -Wextra` 找出未使用變數與把 `=` 寫在條件中的問題；練習：[warning_practice.cpp](warning_practice.cpp)。
- [ ] [**第 64 課：設計邊界值測試**](lesson-64.md) — 檢查有效分數範圍的兩側：`-1`、`0`、`100`、`101`；練習：[score_range_test.cpp](score_range_test.cpp)。
- [ ] [**第 65 課：一個指令重跑所有測試**](lesson-65.md) — 用 `run_tests.sh` 分別編譯與執行兩份測試，失敗時停止；練習：[run_tests.sh](run_tests.sh)。

本章練習從專案根目錄進入 `13-testing/` 後編譯；不需修改學生專題的程式。

[返回總索引](../README.md)
