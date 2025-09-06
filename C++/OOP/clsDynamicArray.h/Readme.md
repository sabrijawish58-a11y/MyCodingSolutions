# 📦 clsDynamicArray<T>

## 📌 Purpose
A generic, dynamically resizable array class implemented in C++ using templates. It provides basic array operations such as insertion, deletion, searching, resizing, reversing, and more — similar to dynamic array structures like `std::vector` but with manual memory management for educational purposes.

---

## 🧱 Key Features

### 🏗️ Construction
- `clsDynamicArray(int Size = 0)` → Initializes array with given size
- Destructor handles memory cleanup

---

### 🔁 Core Operations
- `SetItem(index, value)` → Sets value at index
- `GetItem(index)` → Gets value at index
- `Size()` / `IsEmpty()` → Inspect array state
- `PrintList()` → Display all elements

---

### ✨ Modification
- `Resize(newSize)` → Resizes array and preserves data
- `Reverse()` → Reverses array in-place
- `Clear()` → Clears the array (size becomes 0)

---

### ➖ Deletion
- `DeleteItemAt(index)` → Deletes item at index
- `DeleteFirstItem()` / `DeleteLastItem()`
- `DeleteItem(value)` → Deletes first occurrence of value

---

### ➕ Insertion
- `InsertAt(index, value)`
- `InsertAtBeginning(value)`
- `InsertAtEnd(value)`
- `InsertBefore(index, value)`
- `InsertAfter(index, value)`

---

### 🔍 Search
- `Find(value)` → Returns index of first match; `-1` if not found

---

## 🧪 Example Usage
```cpp
clsDynamicArray<int> arr(3);
arr.SetItem(0, 10);
arr.SetItem(1, 20);
arr.SetItem(2, 30);
arr.InsertAtEnd(40);
arr.PrintList(); // Output: 10 20 30 40

arr.DeleteItem(20);
arr.Reverse();
arr.PrintList(); // Output: 40 30 10

📦 Files
clsDynamicArray.h → Contains full implementation