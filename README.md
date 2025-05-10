# 📇 Contact Manager in C

A simple contact manager built in C, designed to demonstrate file handling, structs, modular code, and basic terminal interaction.

---

## ✨ Features

- Add new contacts (name + phone)
- View all saved contacts
- Save contacts to a binary file
- Load contacts from file on startup

---

## 🧠 Technologies

- C (C99 standard)
- GCC compiler
- Standard C Library

---

## 📁 Project Structure

```
contact-manager/
├── src/
│   ├── main.c           # Entry point
│   ├── contacts.c       # Contact logic
│   └── contacts.h       # Header file
├── Makefile             # Compilation automation
├── README.md            # This file
└── contacts.dat         # Saved contacts (auto-generated)
```

---

## 🚀 How to Compile & Run

### 🔧 With Make

```bash
make
./contact-manager
```

### 💥 To clean compiled files

```bash
make clean
```

---

## 💡 Example Usage

```
--- Contact Manager ---
1. Add Contact
2. List Contacts
3. Save & Exit
Choose an option: 1
Enter name: Alice
Enter phone: 12345
Contact added successfully.
```

---

## 📌 Notes

- All data is saved in a binary file named `contacts.dat`.
- Maximum number of contacts is currently 100 (can be increased).

