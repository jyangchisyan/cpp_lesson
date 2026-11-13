# 第 1 課：輸出與程式入口

[返回本類索引](README.md)

## 5 分鐘重點

C++ 程式從 `main()` 開始執行。`std::cout` 將文字輸出到畫面；字串用雙引號包住，`\n` 表示換行。每個敘述通常以分號結束。

```cpp
#include <iostream>
int main() {
    std::cout << "你好，C++！\n";
    return 0;
}
```

## 一道練習

自己寫程式印出 `你好，C++！` 並換行。對照 [hello.cpp](hello.cpp)；在本資料夾執行 `g++ hello.cpp -o hello && ./hello`。試著把文字換成自己的問候語。
