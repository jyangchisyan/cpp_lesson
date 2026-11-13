# 第 32 課：刪除全部相同值

[返回本類索引](README.md)

## 5 分鐘重點

`std::remove` 把保留的元素移到前方，回傳新的**邏輯結尾**，但容器大小尚未改變；接著呼叫 `erase` 才真正刪除尾端。這是 remove–erase 慣用法。

```cpp
auto newEnd = std::remove(numbers.begin(), numbers.end(), target);
numbers.erase(newEnd, numbers.end());
```

## 一道練習

從 `2 5 2 7` 刪除全部 `2`，應剩 `5 7`。檢查 `size()` 確實變小；對照 [remove_all.cpp](remove_all.cpp)。
