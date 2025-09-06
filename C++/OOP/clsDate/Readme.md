# 📅 clsDate

## 📌 Purpose
A comprehensive date-handling class in C++ that encapsulates all operations related to calendar dates. It supports creation, validation, formatting, comparison, arithmetic, and calendar generation.

---

## 🧱 Key Features

### 🏗️ Constructors
- `clsDate()` → Initializes with system date
- `clsDate(string sDate)` → Parses from `"dd/mm/yyyy"`
- `clsDate(short Day, short Month, short Year)` → Manual construction
- `clsDate(short DayOrderInYear, short Year)` → Constructs date from day number in year

---

### 📆 Date Info & Validation
- `IsValid()` / `IsValidDate(clsDate)`
- `isLeapYear()` / `isLeapYear(short)`
- `NumberOfDaysInAMonth()` / `NumberOfDaysInAMonth(Month, Year)`
- `NumberOfDaysInAYear()` / `NumberOfDaysInAYear(Year)`
- `DayOfWeekOrder()` → Returns 0–6 (Sun–Sat)
- `DayShortName()` / `MonthShortName()`
- `DateToString()` → `"dd/mm/yyyy"`
- `GetSystemDate()` / `GetSystemDateTimeString()`

---

### 📊 Date Arithmetic
#### ➕ Addition
- `AddOneDay()` / `AddDays(short)`
- `IncreaseDateByXDays`, `XWeeks`, `XMonths`, `XYears`, `XDecades`, `OneCentury`, `OneMillennium`

#### ➖ Subtraction
- `DecreaseDateByOneDay()` / `DecreaseDateByXDays`, `XWeeks`, `XMonths`, `XYears`, `XDecades`, `OneCentury`, `OneMillennium`

---

### 📈 Date Comparison
- `IsDate1BeforeDate2`, `IsDate1EqualDate2`, `IsDate1AfterDate2`
- `CompareDates(clsDate Date1, clsDate Date2)` → Returns enum `Before`, `Equal`, `After`

---

### 📅 Calendar Generation
- `PrintMonthCalendar()` → Prints calendar for current month
- `PrintYearCalendar()` → Prints full year calendar

---

### 📐 Calculations
- `DaysFromTheBeginingOfTheYear()`
- `GetDateFromDayOrderInYear()`
- `GetDifferenceInDays(Date1, Date2)`
- `CalculateMyAgeInDays(DateOfBirth)`
- `DaysUntilTheEndOfWeek`, `Month`, `Year`

---

### 🧮 Business Logic
- `IsWeekEnd()` → Friday & Saturday
- `IsBusinessDay()` → Not weekend
- `CalculateBusinessDays(DateFrom, DateTo)`
- `CalculateVacationDays(DateFrom, DateTo)`
- `CalculateVacationReturnDate(DateFrom, VacationDays)`

---

## 🧪 Example Usage
```cpp
clsDate d1("05/09/2025");
clsDate d2 = clsDate::GetSystemDate();

if (d1.IsValid())
    cout << d1.DateToString() << endl;

cout << "Days until end of month: " << d1.DaysUntilTheEndOfMonth() << endl;
cout << "Vacation return date: " << clsDate::CalculateVacationReturnDate(d1, 5).DateToString() << endl;

📦 Files
clsDate.h → Contains full implementation
Depends on: clsString.h for string splitting