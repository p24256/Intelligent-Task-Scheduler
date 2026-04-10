# 🧠 Intelligent Task Scheduler (DSA Assignment)

This project is a complete backend simulation of an **Intelligent Task Scheduler**, developed as part of the **ECS 202: Data Structures and Algorithms** course.

The system efficiently manages tasks using multiple advanced data structures and algorithms, ensuring fast lookup, priority-based execution, and sorted reporting.

---

## 🚀 Features

* 🌳 **AVL Tree**

  * Self-balancing BST
  * Supports insert, delete, search, and inorder traversal
  * Maintains balance using rotations

* 🌳 **Red-Black Tree**

  * Balanced binary search tree with color properties
  * Efficient insertions with fix-up operations

* 🌳 **2-3 Tree**

  * Multi-way search tree
  * Maintains balance using node splits

* 🔺 **Max Heap / Priority Queue**

  * Retrieves highest priority task instantly
  * Custom comparison:

    * Higher priority first
    * If tie → earlier deadline
    * If tie → smaller taskID

* 🔢 **Sorting Algorithms**

  * Insertion Sort
  * Quick Sort
  * Heap Sort
    (Based on deadline, priority, and taskID)

---

## 🧩 Task Model

Each task contains:

* `taskID` (unique)
* `description`
* `priority` (higher = more urgent)
* `deadline` (smaller = sooner)

---

## ⚙️ Functionalities

* Insert task into all data structures
* Delete task (AVL Tree)
* Search task by ID
* Extract highest priority task (Heap)
* Display trees (inorder / structured view)
* Run multiple sorting algorithms
* Execute fixed test sequence with logs

---

## 📊 Key Concepts Implemented

* Tree rotations (AVL)
* Recoloring & rotations (Red-Black Tree)
* Node splitting (2-3 Tree)
* Heapify operations
* Custom comparator logic
* Algorithmic time complexity analysis

---

## 🛠️ Tech Stack

* Language: **C++ (C++17)**
* Compiler: `g++ -std=c++17`
* Libraries Used: iostream, vector, string, chrono

---

## 📌 Learning Outcomes

* Deep understanding of balanced trees
* Hands-on experience with priority queues
* Implementation of sorting algorithms from scratch
* Debugging complex data structure behaviors
* Performance comparison of different structures

---

## 👨‍💻 Author

**Prince**
BS Engineering Sciences, IISER Bhopal

---

## ⚠️ Note

This project strictly avoids STL structures like `map`, `set`, and `priority_queue`, ensuring all data structures are implemented from scratch.
