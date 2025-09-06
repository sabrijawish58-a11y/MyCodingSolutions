# ✅ clsInputValidate

## 📌 Purpose
A static utility class that provides robust input validation methods for numeric, string, character, and date inputs. It ensures user inputs are within expected ranges and formats.

---

## 🧱 Key Features

### 🔢 Numeric Validation
- `IsNumberBetween(int, From, To)`
- `IsNumberBetween(double, From, To)`

### 📆 Date Validation
- `IsDateBetween(clsDate Date, clsDate From, clsDate To)`
- `IsValideDate(clsDate)` → Uses `clsDate::IsValidDate`

---

### 📥 Input Reading
#### 🔢 Numbers
- `ReadShortNumber()`
- `ReadIntNumber()`
- `ReadFloatNumber()`
- `ReadDblNumber()`

#### 🔢 Numbers with Range
- `ReadShortNumberBetween(From, To)`
- `ReadIntNumberBetween(From, To)`
- `ReadFloatNumberBetween(From, To)`
- `ReadDblNumberBetween(From, To)`

#### 🔤 Text & Characters
- `ReadString()` → Reads full line with whitespace
- `ReadChar()` → Reads single character

---

## 🧪 Example Usage
```cpp
int age = clsInputValidate::ReadIntNumberBetween(18, 65);
string name = clsInputValidate::ReadString();
clsDate dob(5, 9, 2000);
if (clsInputValidate::IsValideDate(dob))
    cout << "Valid date!" << endl;

📦 Files
clsInputValidate.h → Contains full implementation
Depends on: clsDate.h, clsString.h