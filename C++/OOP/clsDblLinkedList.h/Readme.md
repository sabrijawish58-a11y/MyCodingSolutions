# 🔗 clsDblLinkedList<T>

## 📌 Purpose
A generic, template-based doubly linked list implementation in C++ that supports insertion, deletion, traversal, reversal, and indexed access. Designed to be reusable, efficient, and compatible with any data type.

---

## 🧱 Key Features

### 🏗️ Construction
- `clsDblLinkedList<T>` → Creates an empty list of type `T`

### ➕ Insertion
- `InsertAtBeginning(T value)`
- `InsertAtEnd(T value)`
- `InsertAfter(Node* current, T value)`
- `InsertAfter(int index, T value)`

### ➖ Deletion
- `DeleteNode(Node*& node)`
- `DeleteFirstNode()`
- `DeleteLastNode()`
- `Clear()` → Deletes all nodes

### 🔍 Search & Access
- `Find(T value)` → Returns pointer to node
- `GetNode(int index)` → Returns pointer to node at index
- `GetItem(int index)` → Returns value at index
- `UpdateItem(int index, T newValue)` → Updates value at index

### 🔁 Utilities
- `PrintList()` → Prints all values
- `Reverse()` → Reverses the list order
- `Size()` → Returns number of nodes
- `IsEmpty()` → Checks if list is empty

---

## 🧪 Example Usage
```cpp
clsDblLinkedList<int> list;
list.InsertAtBeginning(10);
list.InsertAtEnd(20);
list.InsertAfter(0, 15); // Insert after index 0
list.PrintList(); // Output: 10 15 20
list.Reverse();
list.PrintList(); // Output: 20 15 10

📦 Files
clsDblLinkedList.h → Contains full implementation