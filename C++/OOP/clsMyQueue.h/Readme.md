# 📥 clsMyQueue<T>

## 📌 Purpose
A generic queue implementation in C++ built on top of a custom doubly linked list (`clsDblLinkedList<T>`). It supports standard queue operations and extended list manipulation for full control over queue items.

---

## 🧱 Key Features

### 🔁 Core Queue Operations
- `push(T)` → Add item to the back
- `pop()` → Remove item from the front
- `front()` / `back()` → Access first and last items
- `Size()` / `IsEmpty()` → Inspect queue state
- `Print()` → Display all items

### ✨ Extended Functionalities
- `GetItem(int Index)` → Access item by index
- `UpdateItem(int Index, T NewValue)` → Modify item
- `InsertAfter(int Index, T Value)` → Insert after index
- `InsertAtFront(T)` / `InsertAtBack(T)` → Manual insertions
- `Reverse()` → Reverse queue order
- `Clear()` → Remove all items

---

## 🧪 Example Usage
```cpp
clsMyQueue<string> q;
q.push("Ahmed");
q.push("Sabri");
q.push("Omar");

q.Print(); // Output: Ahmed Sabri Omar

q.pop();
q.Print(); // Output: Sabri Omar

q.InsertAtFront("First");
q.Reverse();
q.Print(); // Output: Omar Sabri First

📦 Files
clsMyQueue.h → Queue implementation
Depends on: clsDblLinkedList.h