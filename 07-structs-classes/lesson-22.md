# 第 22 課：`class` 與封裝

[返回本類索引](README.md)

## 5 分鐘重點

類別把資料及操作放在一起。`private` 成員只能由類別內部操作；`public` 函式讓外界以指定方式使用。只讀取狀態的成員函式可標記 `const`。

```cpp
class Counter {
public:
    void add(int value) { total += value; }
    int get() const { return total; }
private:
    int total = 0;
};
```

## 一道練習

建立計數器，依序加 `3` 和 `5`，透過 `get()` 印出 `8`；不要直接從外部修改 `total`。對照 [counter.cpp](counter.cpp)。
