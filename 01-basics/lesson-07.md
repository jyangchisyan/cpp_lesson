# 第 7 課：字串與整行輸入

[返回本類索引](README.md)

## 5 分鐘重點

`std::string` 儲存文字。`std::cin >> name` 讀到空白就停止；`std::getline(std::cin, name)` 才能讀完整的一行。若前面用過 `>>`，先處理殘留的換行，否則第一個 `getline` 可能讀到空字串。

```cpp
std::string name;
std::getline(std::cin, name);
std::cout << "你好，" << name << "！\n";
```

## 一道練習

讀入名字與喜歡的顏色，各占一行，印出含這兩項資訊的問候語。用有空格的名字（如 `Amy Lee`）測試。對照 [greeting.cpp](greeting.cpp)。
