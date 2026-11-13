# 基本輸入輸出、變數與字串

按課次複習；下方核取方框供你記錄**重新閱讀**的進度，不代表作業尚未完成。

- [ ] [**第 1 課：輸出與程式入口**](lesson-01.md) — `main()` 是執行起點，`std::cout` 輸出文字，`\n` 換行。練習：[hello.cpp](hello.cpp) 印出「你好，C++！」。
- [ ] [**第 2 課：變數與輸入**](lesson-02.md) — `int` 儲存整數，`std::cin >> year >> age` 讀入資料；運算後用 `std::cout` 輸出。練習：[age.cpp](age.cpp) 計算五年後的年份與年齡。
- [ ] [**第 7 課：字串與整行輸入**](lesson-07.md) — `std::string` 儲存文字；`std::getline(std::cin, text)` 能保留輸入中的空格。練習：[greeting.cpp](greeting.cpp) 讀取名字與喜歡的顏色，輸出完整問候。

編譯範例（先從專案根目錄進入本資料夾）：

```sh
cd 01-basics
g++ greeting.cpp -o greeting
./greeting
```

[返回總索引](../README.md)
