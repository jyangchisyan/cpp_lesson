# 第 19 課：指標 `*` 與位址 `&`

[返回本類索引](README.md)

## 5 分鐘重點

把變數想成一個盒子：`value` 是盒內的數，`&value` 是盒子的地址；`int* pointer` 存這個地址；`*pointer` 沿地址找到盒內數字。宣告中的 `*` 表示指標型別，運算式中的 `*` 表示取用指向的值。

```cpp
int value = 10;
int* pointer = &value;
*pointer += 10;  // value 現在是 20
```

## 一道練習

寫 `addTen(int* pointer)`，由 `main` 傳入 `&value`，讓原本的 `10` 變成 `20`。畫出變數、位址、指標三者的關係再對照 [pointer_add.cpp](pointer_add.cpp)。
