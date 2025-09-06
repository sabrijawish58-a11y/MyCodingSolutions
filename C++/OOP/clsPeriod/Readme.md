# 📆 clsPeriod

## 📌 Purpose
Represents a time period defined by a start and end date. Provides functionality to check for overlap between periods and to print period details.

---

## 🧱 Key Features

### 🏗️ Construction
- `clsPeriod(clsDate StartDate, clsDate EndDate)` → Initializes a period

---

### 🔍 Overlap Detection
- `IsOverlapPeriods(clsPeriod Period1, clsPeriod Period2)` → Static method to check overlap
- `IsOverLapWith(clsPeriod Period2)` → Instance method to check overlap with another period

---

### 🖨️ Display
- `Print()` → Prints start and end dates using `clsDate::Print()`

---

## 🧪 Example Usage
```cpp
clsDate d1(1, 9, 2025);
clsDate d2(10, 9, 2025);
clsPeriod p1(d1, d2);

clsDate d3(5, 9, 2025);
clsDate d4(15, 9, 2025);
clsPeriod p2(d3, d4);

if (p1.IsOverLapWith(p2))
    cout << "Periods overlap!" << endl;

p1.Print();

📦 Files
clsPeriod.h → Contains full implementation
Depends on: clsDate.h