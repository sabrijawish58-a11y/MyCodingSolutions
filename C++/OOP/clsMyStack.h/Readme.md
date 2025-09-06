# 📚 clsMyStack<T>

## 📌 Purpose
A generic stack implementation in C++ built on top of `clsMyQueue<T>`, which itself uses a doubly linked list. This class provides standard stack operations with efficient memory handling and extended access to internal elements.

---

## 🧱 Key Features

### 🔁 Core Stack Operations
- `push(T)` → Adds item to the top of the stack (front of the list)
- `Top()` → Returns the top element (most recently added)
- `Bottom()` → Returns the bottom element (oldest)

### 🧬 Inherited Functionalities from `clsMyQueue`
- `pop()` → Removes the top element
- `Size()` / `IsEmpty()` → Inspect stack state
- `Print()` → Display all elements
- `GetItem(int Index)` → Access item by index
- `UpdateItem(int Index, T NewValue)` → Modify item
- `InsertAfter(int Index, T Value)` → Insert after index
- `InsertAtFront(T)` / `InsertAtBack(T)` → Manual insertions
- `Reverse()` → Reverse stack order
- `Clear()` → Remove all items

---

## 🧪 Example Usage
```cpp
clsMyStack<string> s;
s.push("Sabri");
s.push("Omar");
s.push("Ali");

cout << "Top: " << s.Top() << endl;     // Output: Ali
cout << "Bottom: " << s.Bottom() << endl; // Output: Sabri

s.pop();
s.Print(); // Output: Omar Sabri

📦 Files
clsMyStack.h → Stack implementation
Depends on: clsMyQueue.h, clsDblLinkedList.h