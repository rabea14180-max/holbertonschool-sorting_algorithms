
# C - Sorting Algorithms & Big O

## Project Description

This project focuses on learning **sorting algorithms** in C and understanding **Big O notation** to analyze algorithm time complexity.

---

## Learning Objectives

By completing this project, you will learn:

* How to implement at least four different sorting algorithms
* What **Big O notation** is
* How to evaluate the **time complexity** of an algorithm
* How to choose the best sorting algorithm for a given input
* What a **stable sorting algorithm** is

---

## Sorting Algorithms Used

* **Bubble Sort** → `0-bubble_sort.c`
* **Insertion Sort (Doubly Linked List)** → `1-insertion_sort_list.c`
* **Selection Sort** → `2-selection_sort.c`
* **Quick Sort (Lomuto partition scheme)** → `3-quick_sort.c`

---

## Big O Files

Each sorting algorithm has a corresponding Big O file:

* `0-O` → Bubble Sort
* `1-O` → Insertion Sort
* `2-O` → Selection Sort
* `3-O` → Quick Sort

Each file contains **three lines only**:

1. Best case
2. Average case
3. Worst case

---

## Big O Summary

| Algorithm      | Best       | Average    | Worst | Stable |
| -------------- | ---------- | ---------- | ----- | ------ |
| Bubble Sort    | O(n)       | O(n²)      | O(n²) | Yes    |
| Insertion Sort | O(n)       | O(n²)      | O(n²) | Yes    |
| Selection Sort | O(n²)      | O(n²)      | O(n²) | No     |
| Quick Sort     | O(n log n) | O(n log n) | O(n²) | No     |

---

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* Compiled on **Ubuntu 20.04 LTS**
* Compilation command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

* All files must end with a new line
* Code must follow **Betty style**
* No global variables allowed
* Maximum of **5 functions per file**
* No use of standard library functions (e.g. `printf`, `puts`)
* `main.c` files are for testing only and must not be pushed
* All function prototypes must be declared in `sort.h`
* All header files must be include guarded
* No need to sort a list or array if its size is less than 2

---

## File Structure

```
.
├── README.md
├── sort.h
├── 0-bubble_sort.c
├── 0-O
├── 1-insertion_sort_list.c
├── 1-O
├── 2-selection_sort.c
├── 2-O
├── 3-quick_sort.c
└── 3-O
```

---

## Author

RABEA Thabit and  Mustafa Omar Alalmi

---

Happy coding 🚀
