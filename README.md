# 📘 Student Management System

## 📋 Project Description

This C++ project implements a *Student Management System* designed to help educational institutions manage:

- Student records  
- Courses  
- Grades  
- Attendance  

The project demonstrates foundational concepts in *Object-Oriented Programming (OOP)* such as:

- Classes and inheritance  
- Access modifiers (public, protected)  
- Constructors  
- Function overloading  

---

## 🧱 Code Structure

The system is organized using multiple classes, each responsible for a specific aspect of student management:

### 🔹 Student_management_system (Base Class)
- Maintains a list of students with their names and registration numbers.  
- Provides a display() function to show student information.  

### 🔹 Course (Derived Class)
- Inherits from Student_management_system.  
- Contains course codes and names.  
- Displays available courses and associated details.  

### 🔹 Grade (Derived Class)
- Inherits from Course.  
- Stores and displays grades for different courses per student.  

### 🔹 Attendance (Derived Class)
- Inherits from Grade.  
- Maintains a record of attendance for each student.  

---

## 🚀 Features

- *OOP Design*: Uses inheritance to model relationships between students, courses, grades, and attendance.  
- *Encapsulation*: Keeps data safe and modular using access modifiers.  
- *Simple CLI Interface*: Output is printed directly using cout.  

---

## 🛠️ How to Run

1. Make sure you have a C++ compiler (e.g., g++) installed.  
2. Compile the code:

   ```bash
   g++ "Student Management System.cpp" -o student_mgmt
