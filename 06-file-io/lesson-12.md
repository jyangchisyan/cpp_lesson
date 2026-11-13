# 第 12 課：寫入再讀回檔案

[返回本類索引](README.md)

## 5 分鐘重點

`std::ofstream` 寫檔，`std::ifstream` 讀檔。名字可能包含空格，因此用 `std::getline` 讀完整行；寫完後關閉輸出檔，再開啟輸入檔讀回。相對路徑以**執行時所在資料夾**為準。

```cpp
std::ofstream output("name.txt");
output << name << '\n';
output.close();
std::ifstream input("name.txt");
std::getline(input, name);
```

## 一道練習

輸入 `Amy Lee`，存入 `name.txt` 再讀回並顯示。從本資料夾執行；注意重跑程式會覆寫舊檔。對照 [save_name.cpp](save_name.cpp)。
