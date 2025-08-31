# VehicleDB – Database Schema Overview

This folder contains SQL queries and exercises based on the **VehicleDB** relational database. The schema models vehicle specifications, classifications, and manufacturer details, designed to support analytical queries and structured problem-solving.

## 🧩 Tables Summary

- **Makes**  
  - `MakeID` (PK), `Make`  
  - Stores vehicle brands (e.g., Toyota, Ford)

- **MakeModels**  
  - `MakeModelID` (PK), `MakeID` (FK), `Model`  
  - Represents models associated with each make

- **SubModels**  
  - `SubModelID` (PK), `SubModel`  
  - Contains sub-model variants

- **Bodies**  
  - `BodyID` (PK), `BodyStyle`  
  - Defines vehicle body types (e.g., Sedan, SUV)

- **DriveTypes**  
  - `DriveTypeID` (PK), `DriveTypeName`  
  - Specifies drive configurations (e.g., AWD, FWD)

- **FuelTypes**  
  - `FuelTypeID` (PK), `FuelTypeName`  
  - Categorizes fuel types (e.g., Gasoline, Electric)

- **VehicleDetails**  
  - `VehicleID` (PK), `MakeModelID` (FK), `SubModelID` (FK), `BodyID` (FK), `DriveTypeID` (FK), `FuelTypeID` (FK), `Year`, `Price`  
  - Central table containing vehicle records and linking all classification tables

## 🔗 Relationships

- `VehicleDetails` is the core table, referencing:
  - `MakeModels` → via `MakeModelID`
  - `SubModels`, `Bodies`, `DriveTypes`, `FuelTypes` → via respective foreign keys
- `MakeModels` references `Makes` via `MakeID`

## 📌 Notes

- All SQL queries in subfolders assume this schema.
- No actual data is included—queries are written for educational and analytical purposes.
- Each problem folder contains:
  - A `.sql` file with the query
  - A `README.md` explaining the logic and expected output
