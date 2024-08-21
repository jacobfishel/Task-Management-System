Project: Task Management System
Description:
Create a simple console-based Task Management System where you can add, remove, view, and prioritize tasks. Each task will have a description, priority level, and a due date. The system should allow you to manage tasks using different data structures.

Requirements:
Task Structure:

Create a Task class/struct with attributes like description, priority, and due date.
Task Storage:

Vector: Store tasks in a dynamic array using std::vector and allow operations like adding, removing, and listing tasks.
Linked List: Implement a singly or doubly linked list to manage tasks in order of their due dates.
Queue: Use a queue to manage tasks in the order they are added (FIFO).
Stack: Implement a stack for undo operations, such as removing the last added task.
Priority Queue:

Use a priority queue (or a heap) to always process the most urgent task first.
Binary Tree / Binary Search Tree:

Implement a binary tree to store tasks based on their due dates. Use an in-order traversal to list tasks by their due dates.
User Interface:

Create a simple text-based menu that allows the user to:
Add a task
Remove a task
View all tasks
View tasks by priority
Undo the last added task (using the stack)
View tasks sorted by due date (using the binary search tree)
Additional Features (Optional):
Implement a save and load functionality using file I/O to persist tasks between program runs.
Allow filtering tasks by priority or due date range.
This project will help you practice various data structures and understand how they can be used in real-world scenarios.

