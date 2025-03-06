# 📌 Stack Implementation (clsMyStack) ⚡

> **A C++ template-based stack implementation using a queue (clsMyQueue) built on top of a doubly linked list, supporting basic stack operations and extensions for advanced usage. 🚀**

---

## 🌟 Project Overview

The `clsMyStack` class is a **generic stack** implementation in C++ using the **clsMyQueue** class, which itself is based on a doubly linked list (`clsDblLinkedList`). This structure ensures efficient memory management and stack operations like **push**, **pop**, and **peek** while offering extended functionalities.

### 🔹 Core Functionalities:
- **Push** elements to the top of the stack 🔄
- **Pop** elements from the top ❌
- **Access Top & Bottom** elements directly 🔍
- **Check Stack Size & Emptiness** 📏
- **Reverse** stack elements 🔄
- **Modify & Insert** elements within the stack ✏️
- **Clear** the entire stack with one function call ✨

This stack implementation is **generic**, meaning it can handle any data type using C++ templates.

---

## ✨ Features

### 🔹 Basic Stack Operations
- **`Push(Value)`**: Adds an element to the top of the stack.
- **`Pop()`**: Removes the top element of the stack.
- **`Top()`**: Retrieves the top element of the stack.
- **`Bottom()`**: Retrieves the bottom element of the stack.
- **`Size()`**: Returns the number of elements in the stack.
- **`IsEmpty()`**: Checks if the stack is empty.
- **`Print()`**: Displays the stack elements.

### 🔹 Extended Functionalities
- **`GetItem(Index)`**: Retrieves the value of an element at a specific index.
- **`Reverse()`**: Reverses the order of stack elements.
- **`UpdateItem(Index, NewValue)`**: Updates the value of an element at a given index.
- **`InsertAfter(Index, Value)`**: Inserts an element after a specific index.
- **`InsertAtFront(Value)`**: Inserts an element at the top of the stack.
- **`InsertAtBack(Value)`**: Inserts an element at the bottom of the stack.
- **`Clear()`**: Removes all elements from the stack.

---

## 🚀 How It Works

### 🔹 Push & Pop
- Elements are added using `Push(Value)` at the **top** of the stack.
- Elements are removed using `Pop()` from the **top**.

### 🔹 Accessing Elements
- `Top()` and `Bottom()` allow **direct access** to the top and bottom elements of the stack.
- `GetItem(Index)` retrieves an element at a given position.

### 🔹 Modifications & Reversal
- `UpdateItem(Index, NewValue)` modifies an existing value at a given index.
- `Reverse()` swaps all element links to **reverse** the stack order.
- `InsertAfter(Index, Value)`, `InsertAtFront(Value)`, and `InsertAtBack(Value)` allow **custom insertions**.

### 🔹 Memory Management
- The stack dynamically allocates memory for new elements.
- `Clear()` safely removes all elements to prevent memory leaks.

---

## 📚 Potential Enhancements

- 🏗 **Iterator Support**: Implementing iterators for STL-like traversal.
- ⏳ **Time Complexity Optimization**: Enhancing performance for large datasets.
- 🗃️ **Persistent Storage**: Implementing file handling for saving stack data.
- 🚀 **Thread Safety**: Making the stack thread-safe for concurrent operations.

---

## ⚙️ Technologies Used

- **Language**: C++
- **Templates**: Enables the stack to store any data type.
- **Queue-based Stack**: Leverages a queue (`clsMyQueue`) implemented with a doubly linked list.
- **Dynamic Memory Allocation**: Uses pointers for flexible data storage.

---

## 🎯 Learning Outcomes

This project demonstrates:
- ✅ **Stack operations (push, pop, top, bottom, size, empty check)**
- ✅ **Generic programming with C++ templates**
- ✅ **Queue-based stack implementation for dynamic storage**
- ✅ **Efficient memory management with pointers**

---

## 📜 License

This project is **open-source**. Feel free to modify and enhance it! 🚀

---

## 🤝 Contributing

Contributions are welcome! If you have ideas for improvements, submit a Pull Request.

---

## 🏁 Ready to Explore?

### 🚀 How to Run
1. **Download** the repository.
2. **Include** `clsMyStack.h` in your project.
3. **Compile & Run** your C++ program with a standard compiler (e.g., `g++ main.cpp -o output`).
4. **Test** different stack operations.
