# 第 21 課：空指標 `nullptr`

[返回本類索引](README.md)

## 5 分鐘重點

指標可能沒有指向任何有效物件，這時可用 `nullptr` 表示。對空指標做 `*pointer` 是錯誤的；**先判斷、再解參照**。

```cpp
if (pointer == nullptr) {
    std::cout << "沒有數值\n";
} else {
    std::cout << *pointer * 2 << '\n';
}
```

## 一道練習

完成 `printDouble`：有數值時印兩倍，傳入 `nullptr` 時印「沒有數值」。分別測試兩種情況；對照 [safe_pointer.cpp](safe_pointer.cpp)。
