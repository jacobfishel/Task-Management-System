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

You said:
is dynamic when the code automatically allocates space? whats it called when the coder makes the space?
ChatGPT said:
ChatGPT
Yes, "dynamic" refers to memory that is automatically allocated during runtime, typically using functions like new or malloc in C++. This allows the program to request memory as needed, which is particularly useful when the amount of required memory isn't known until the program is running.

When the programmer explicitly allocates space, usually at compile time, it's called static memory allocation. This is done for variables whose size is known at compile time, and the memory is typically allocated on the stack.

Here’s a quick comparison:

Dynamic Memory Allocation: Memory is allocated at runtime using new (in C++) or malloc (in C). The programmer is responsible for deallocating this memory using delete or free to prevent memory leaks.

Static Memory Allocation: Memory is allocated at compile time, typically on the stack. The size and lifetime of the allocated memory are fixed, and the system automatically handles its deallocation when the variable goes out of scope. Examples include local variables and global variables.

Automatic Memory Allocation: Sometimes used interchangeably with static allocation, this refers to the memory that is automatically managed by the program's runtime, particularly for local variables.

So, in summary:

Dynamic allocation: Space is allocated during runtime automatically.
Static allocation: Space is manually allocated by the coder, usually at compile time.