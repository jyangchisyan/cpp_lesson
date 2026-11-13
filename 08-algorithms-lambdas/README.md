# 標準演算法、lambda 與迭代器

核取方框用來記錄重新閱讀的進度。演算法參數中的 `begin()`、`end()` 指定處理範圍；`end()` 是最後一個元素**之後**的位置，不可直接取值。

- [ ] [**第 26 課：自訂排序 `std::sort`**](lesson-26.md) — lambda 比較兩個元素；`first.area() < second.area()` 讓小面積排前面。練習：[sort_rectangles.cpp](sort_rectangles.cpp) 逐行輸出升序的矩形面積。
- [ ] [**第 27 課：條件計數 `std::count_if`**](lesson-27.md) — lambda 對每個元素回傳是否符合；`[level]` 把外部門檻帶進 lambda。練習：[count_larger_rectangles.cpp](count_larger_rectangles.cpp) 計算面積大於或等於門檻的個數。
- [ ] [**第 28 課：找第一個符合者 `std::find_if`**](lesson-28.md) — 回傳迭代器，找不到則等於 `end()`；先檢查，再用 `result->area()` 取面積。練習：[find_rectangle.cpp](find_rectangle.cpp) 找輸入順序中第一個符合門檻的矩形。
- [ ] [**第 29 課：用迭代器修改元素**](lesson-29.md) — `std::find` 找指定值；找到後 `*result = newValue` 只修改第一個。練習：[replace_first.cpp](replace_first.cpp)。
- [ ] [**第 30 課：替換全部 `std::replace`**](lesson-30.md) — 指定範圍、舊值與新值；所有相符元素都被替換。練習：[replace_all.cpp](replace_all.cpp)。
- [ ] [**第 31 課：刪除第一個元素**](lesson-31.md) — `find` 成功後呼叫 `vector.erase(result)`；刪除後不要再使用舊迭代器。練習：[remove_first.cpp](remove_first.cpp)。
- [ ] [**第 32 課：刪除全部相同值**](lesson-32.md) — `std::remove` 移動保留的元素並回傳新邏輯結尾；再用 `erase(..., end())` 真正縮小容器。練習：[remove_all.cpp](remove_all.cpp)。
- [ ] [**第 33 課：依條件刪除**](lesson-33.md) — `std::remove_if` 配合捕捉門檻的 lambda 和 `erase`。練習：[remove_below.cpp](remove_below.cpp) 刪掉所有小於門檻的整數。
- [ ] [**第 34 課：逐一轉換 `std::transform`**](lesson-34.md) — 來源範圍加結果起點；結果起點設為原容器的 `begin()` 可原地更新。練習：[square_all.cpp](square_all.cpp) 將每個數字平方。
- [ ] [**第 35 課：加總 `std::accumulate`**](lesson-35.md) — `<numeric>` 提供加總函式；第三參數是初始值，空集合時直接回傳它。練習：[sum_square.cpp](sum_square.cpp) 先平方再求總和。
- [ ] [**第 36 課：是否存在 `std::binary_search`**](lesson-36.md) — **先排序**，再取得是否找到的布林值。練習：[binary_search.cpp](binary_search.cpp)。
- [ ] [**第 37 課：第一個位置 `std::lower_bound`**](lesson-37.md) — **先排序**；找第一個大於或等於查詢值的位置，還要檢查是否真正相等。練習：[first_position.cpp](first_position.cpp) 輸出零起算索引或 `-1`。
- [ ] [**第 38 課：出現次數 `std::upper_bound`**](lesson-38.md) — **先排序**；`upper_bound - lower_bound` 是相同值所佔的位置數，查無資料時為 `0`。練習：[count_occurrences.cpp](count_occurrences.cpp)。

```sh
cd 08-algorithms-lambdas
g++ count_occurrences.cpp -o count_occurrences
./count_occurrences
```

[返回總索引](../README.md)
