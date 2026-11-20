# 第 62 課：用 `assert` 檢查函式結果

[返回本類索引](README.md)

## 這課要學什麼

以前我們輸入資料、看畫面結果，再用眼睛判斷對錯。測試則是先寫下「這個輸入應得到什麼」，讓程式替我們檢查。這一課先用小函式練習，不必修改學生專題。

## 5 分鐘重點

### 1. 認識 `assert`

`#include <cassert>` 後可以使用 `assert(條件)`。條件為 `true` 時，程式繼續執行，`assert` 自己不印文字；條件為 `false` 時，程式會顯示失敗的位置並中止，後面的敘述不會執行。

例如先看一個**偶數判斷**，再把相同方法用於本課的及格判斷：

```cpp
#include <cassert>
#include <iostream>

bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    assert(isEven(4));
    assert(!isEven(5));
    std::cout << "測試通過\n";
}
```

`isEven(4)` 是 `true`，所以第一個斷言通過。`isEven(5)` 是 `false`；`!` 表示「不是」，因此 `!isEven(5)` 是 `true`，第二個斷言也通過。最後才會印出「測試通過」。如果暫時改為 `assert(isEven(5));`，程式會在那一行中止，不會印出成功訊息。

### 2. 測試邊界，不只測一般情況

本課要寫的 `isPassing(score)` 規則是「至少 `60` 分及格」。`59` 與 `60` 正好位於界線兩側；若把 `>=` 誤寫成 `>`，測 `80` 不會發現問題，但測 `60` 就會失敗。

| 分數 | 預期 `isPassing` 回傳 |
| --- | --- |
| `0` | `false` |
| `59` | `false` |
| `60` | `true` |
| `100` | `true` |

測預期為 `false` 的情況時，寫 `assert(!isPassing(59));`；測預期為 `true` 的情況時，寫 `assert(isPassing(60));`。

### 3. `assert` 不能取代輸入檢查

`assert` 用來檢查**自己寫的邏輯是否符合預期**，不是拿來處理使用者輸錯資料。學生專題仍須用 `if` 檢查無效分數與重複姓名。編譯時若定義 `NDEBUG`，斷言可能被停用，因此也不要把必要的運算放在 `assert(...)` 裡。

## 一道練習

在本資料夾自行建立 `pass_test.cpp`，照以下順序完成：

1. 包含 `<cassert>` 和 `<iostream>`。
2. 在 `main()` **之前**定義 `bool isPassing(int score)`，讓 `60` 分以上（含 `60`）回傳 `true`。
3. 在 `main()` 寫四個 `assert`，依上表測試 `0`、`59`、`60`、`100`。
4. 四個斷言之後才印出「測試通過」。

這是獨立的小程式，不需要改動 [學生專題](../12-student-project/student_average.cpp)。從專案根目錄執行：

```sh
cd 13-testing
g++ -std=c++17 pass_test.cpp -o pass_test
./pass_test
```

先確認四項測試全通過。再暫時把其中一個預期結果寫反、重新編譯執行，觀察程式在哪一行停止；完成後記得改回正確斷言。若編譯器說找不到 `isPassing`，先檢查函式是否定義在 `main()` 前面，以及名字是否拼寫一致。
