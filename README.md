# 🗳️ Online Voting System

A **console-based ****online voting system** developed in **C ****programming** that enables secure voting, prevents duplicate votes, stores records using file handling, and displays election results through a simple menu-driven interface.

---

## 📖 Table of Contents

* About the Project
* Features
* Technology Stack
* Project Structure
* How It Works
* Installation
* Usage
* Sample Output
* Screenshots
* Future Enhancements
* Learning Outcomes
* Contributing
* License
* Author

---

# 📌 About the Project

The **Online Voting System** is designed to demonstrate the core concepts of **C ****programming,** including:

* Structures
* Functions
* Arrays
* File Handling
* Conditional Statements
* Loops
* Menu-Driven Programming

The application simulates an electronic voting system where each registered voter can vote only once, ensuring fairness and data persistence using files.

---

# ✨ Features

* ✅ Secure voter authentication
* ✅ One vote per voter
* ✅ Prevent duplicate voting
* ✅ Candidate-wise vote counting
* ✅ Search voter records
* ✅ Display election results
* ✅ Persistent storage using files
* ✅ Easy-to-use menu-driven interface

---

# 🛠 Technology Stack

| Category | Technology                       |
| -------- | -------------------------------- |
| Language | C                                |
| IDE      | Code::Blocks / Dev-C++ / VS Code |
| Compiler | GCC                              |
| Storage  | File Handling (.dat/.txt files)  |
| Platform | Windows / Linux                  |

---

# 📂 Project Structure

```text
Online-Voting-System/
│
├── vote.c                 # Main source code
├── voters.dat             # Voter records
├── votes.dat              # Vote data
├── README.md
└── screenshots/
    ├── home.png
    ├── voting.png
    └── results.png
```

---

# ⚙️ How It Works

### Step 1

Start the application.

↓

### Step 2

Display the Main Menu.

↓

### Step 3

Select one of the available options:

* Vote
* Display Results
* Search Voter
* Exit

↓

### Step 4

If 'Vote' is selected:

* Enter Voter ID
* Verify voter
* Check voting status
* Display candidate list
* Cast vote
* Save records

↓

### Step 5

Display updated election results.

---

# 🚀 Installation

## Clone the Repository

```bash
git clone https://github.com/your-username/Online-Voting-System.git
```

```bash
cd Online-Voting-System
```

---

## Compile the Project

Using GCC:

```bash
gcc vote.c -o vote
```

---

## Run the program.

### Windows

```bash
vote.exe
```

### Linux / macOS

```bash
./vote
```

---

# 📋 Usage

```
========== ONLINE VOTING SYSTEM ==========

1. Vote
2. Display Results
3. Search Voter
4. Exit

Enter your choice:
```

### Vote Process

```
Enter Voter ID

↓

Validate ID

↓

Already Voted?

↓

No

↓

Select Candidate

↓

Vote Saved Successfully
```

---

# 📊 Sample Result

```
Election Results

Candidate A : 4 Votes

Candidate B : 2 Votes

Candidate C : 1 Vote
```

---

# 🎯 Project Highlights

* File Handling
* Structures
* Arrays
* Menu-Driven Programming
* Data Persistence
* Input Validation
* Election Result Calculation

---

# 🔮 Future Enhancements

* User Login Authentication
* Admin Dashboard
* Candidate Registration
* Dynamic Voter Registration
* Password Encryption
* Database Integration (MySQL/SQLite)
* GUI Version
* Web-Based Voting System
* OTP Verification
* Email Notifications

---

# 🎓 Learning Outcomes

This project demonstrates practical implementation of:

* C Programming Fundamentals
* Modular Programming
* File Management
* Data Structures
* Menu-Based Applications
* Persistent Storage
* Problem Solving
* Software Development Workflow

---

# 🤝 Contributing

Contributions are welcome.

1. Fork the repository.
2. Create a feature branch.
3. Commit your changes.
4. Push the branch.
5. Open a Pull Request.

---

# 📄 License

This project is licensed under the **MIT License**.

---

# 👨‍💻 Author

**Biswajit Rout**

* MCA Student
* Full Stack Developer
* Passionate about Software Development and problem-solving

---

## ⭐ Support

If you found this project useful, consider giving it a **⭐ ****star** on GitHub. It helps others discover the project and motivates future improvements.
