# 🎓 Student Information System

### A Console-Based Student Record Management Application in C

A simple yet practical **Student Information System** developed using the C programming language. This application provides a menu-driven interface to manage student records, including adding new students, viewing existing records, deleting records by student ID, and tracking the total number of students.

The project demonstrates fundamental programming concepts through a structured and interactive application.

---

## 📌 Project Overview

The Student Information System is designed to make basic student record management easier through a command-line interface. Users can perform common operations through a simple menu.

The application stores student information in an array of structures and uses separate functions to handle different operations.


## ✨ Key Features

- ➕ **Add Student:** Register a student using their ID, name, and phone number.
- 📋 **View All Students:** Display all currently stored student records.
- 🗑️ **Delete Student:** Remove a student record using their ID.
- 🔢 **Student Count:** Display the total number of stored students.
- 🖥️ **Interactive Menu:** Navigate through operations using numbered options.
- 📦 **Capacity Management:** Store up to 100 student records during program execution.
- ⚠️ **Basic Error Messages:** Notify users when no records are available, capacity is reached, or a student ID is not found.


## 🛠️ Technology Stack

| Technology | Purpose |
|---|---|
| C | Core programming language |
| `stdio.h` | Input and output operations |
| `string.h` | String handling |
| Code::Blocks | Development environment |
| GCC | Command-line compilation |


## ⚙️ How It Works

1. The program displays the available operations.
2. The user selects an option.
3. The corresponding function performs the requested operation.
4. The program displays a result or an appropriate message.
5. The menu appears again until the user selects Exit.


## 🧩 Core Programming Concepts

- **Structures (`struct`):** Organize student information into records.
- **Arrays:** Store multiple student records.
- **Functions:** Separate adding, viewing, deleting, and counting operations.
- **Pointers:** Update the student count inside functions.
- **Loops:** Repeat the menu and process student records.
- **Conditional Statements:** Check record availability and student IDs.
- **Switch Statement:** Handle menu selections.
- **String Handling:** Read student names and remove newline characters.
- **Standard Input/Output:** Accept input and display results.


## 📂 Project Structure

```text
Student-Information-System/
│
├── StudentInforSystem.c
├── Console images/
|   ├── add-student-1.jpg
|   ├── add-student-2.jpg
|   ├── view-all-student.jpg
|   ├── delete-student.jpg
|   ├── display-student.jpg
└── README.md
```

*Adjust the filename if your actual C source file has a different name.*


## 🚀 Getting Started

### Prerequisites

- Code::Blocks with a configured C compiler, or
- GCC installed on your system.


### Installation

**1. Clone the repository**

```bash
git clone https://github.com/tasfia-Nowrin/Student-Information-System.git
```

**2. Navigate to the project directory**

```bash
cd Student-Information-System
```

**3. Compile the program**

If your source file is named `main.c`, run:

```bash
gcc main.c -o student_system
```

**4. Run the program on Windows**

```powershell
.\student_system.exe
```

Alternatively, open the project in Code::Blocks, build it, and run the application.


## 🖥️ Application Menu

```text
=== Student Information System ===
1. Add Student
2. View All Students
3. Delete Student by ID
4. Display Total Students
5. Exit

Enter your choice:
```

Select an option from `1` to `5` to perform the desired operation.


## 📝 Data Model

Each student record is represented by the following C structure:

```c
typedef struct {
    int id;
    char name[50];
    char phone[15];
} Student;
```

| Field | Description |
|---|---|
| `id` | Student identification number |
| `name` | Student's name |
| `phone` | Student's phone number |


## ⚠️ Current Limitations

- Student records are stored temporarily in memory.
- All records are lost when the program terminates.
- The maximum capacity is fixed at 100 students.
- Search and update features are not currently available.
- Input validation is basic.
- The application runs in a console and has no web interface.


## 🔮 Future Enhancements

- 💾 Save student records to files for permanent storage.
- 🔍 Search students by ID or name.
- ✏️ Update existing student information.
- 🛡️ Improve input validation and prevent duplicate IDs.
- 📊 Add more detailed student statistics.
- 🖥️ Develop a graphical or web-based interface.


## 🎯 Learning Outcomes

Through this project, I practiced:

- Developing a menu-driven C application.
- Organizing code into reusable functions.
- Managing structured data using arrays.
- Working with pointers and strings.
- Adding and deleting records.
- Handling user input and displaying output.
- Understanding the importance of data persistence and validation.


## 👩‍💻 Author

**Tasfia Nowrin**

GitHub: [@tasfia-Nowrin](https://github.com/tasfia-Nowrin)


## 📄 License

This project is intended for educational purposes and for practicing fundamental C programming concepts.

---

*Built with C to practice programming fundamentals and student record management.*
