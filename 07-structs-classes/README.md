# `struct`、`class` 與物件

核取方框用來記錄重新閱讀的進度。

- [ ] [**第 11 課：`struct` 組合資料**](lesson-11.md) — `Student` 將 `name` 與 `score` 放在一起，透過 `student.score` 取得欄位。練習：[top_student.cpp](top_student.cpp) 比較兩位學生分數，印出較高者名字。
- [ ] [**第 22 課：`class` 封裝**](lesson-22.md) — `public` 提供外部可用的函式，`private` 保護內部狀態；唯讀函式可加 `const`。練習：[counter.cpp](counter.cpp) 透過 `add()` 累加，使用 `get() const` 取得總數。
- [ ] [**第 23 課：建構函式**](lesson-23.md) — 物件建立時初始化成員；可用 `: width(value)` 成員初始化列表。練習：[rectangle.cpp](rectangle.cpp) 用寬和高建立矩形並計算面積。
- [ ] [**第 24 課：修改物件狀態**](lesson-24.md) — 會修改資料的 `scale()` 不加 `const`，只讀資料的 `area()` 加 `const`。練習：[rectangle_scale.cpp](rectangle_scale.cpp) 印出縮放前後的面積。
- [ ] [**第 25 課：`vector` 裝物件**](lesson-25.md) — `push_back(Rectangle(width, height))` 存入矩形；用 `const Rectangle&` 走訪而不複製。練習：[rectangle_total.cpp](rectangle_total.cpp) 加總所有矩形面積，空集合結果為 `0`。

```sh
cd 07-structs-classes
g++ rectangle_total.cpp -o rectangle_total
./rectangle_total
```

[返回總索引](../README.md)
