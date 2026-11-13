# 第 48 課：組合一次、輸出兩處

[返回本類索引](README.md)

對照目前累積版本 [student_average.cpp](student_average.cpp)。

## 5 分鐘重點

如果 `std::cout` 和檔案各寫一次報告格式，日後修改容易漏掉其中一處。先用 `std::ostringstream output` 把內容組好，再以 `output.str()` 同時寫入畫面和 `report.txt`。這樣只有一份格式邏輯。

```cpp
std::ostringstream output;
output << "平均分數：" << average << '\n';
std::cout << output.str();
report << output.str();
```

## 一道練習

把報告文字只組合一次，測試一般資料與零位學生，確認兩處輸出一致。
