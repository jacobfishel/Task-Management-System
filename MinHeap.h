#ifndef MinHeap_H
#define MinHeap_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Node {
    int priority;
    string description;
    string dueDate;
    Node* next;

    Node(int priority_, string description_, string dueDate_) :
        priority(priority_), description(description_), dueDate(dueDate_), next(nullptr) {}
};

class MinHeap {
public:
    MinHeap() {}

    // Copy constructor
    MinHeap(const MinHeap& other) {
        heap = other.heap; // Copy the vector
        // Shallow copy of the nodes; deep copy would be more complex and require cloning nodes
    }

    void addTaskToHeap(Node* Task) {
        heap.push_back(Task);
        siftUp(heap.size() - 1);
    }

    Node* extractMin() {
        if (heap.empty())
            throw out_of_range("Heap is empty");

        Node* minValue = heap.front();
        heap[0] = heap.back();
        heap.pop_back();
        if (!heap.empty())
            siftDown(0);

        return minValue;
    }

    bool isEmpty() const {
        return heap.empty();
    }

    size_t size() const {
        return heap.size();
    }

private:
    std::vector<Node*> heap;

    void siftUp(int index) {
        while (index > 0) {
            int parentIndex = (index - 1) / 2;
            if (heap[index]->priority >= heap[parentIndex]->priority) break;
            swap(heap[index], heap[parentIndex]);
            index = parentIndex;
        }
    }

    void siftDown(int index) {
        int leftChild = (index * 2) + 1;
        int rightChild = (index * 2) + 2;
        int smallest = index;

        if (leftChild < heap.size() && heap[leftChild]->priority < heap[smallest]->priority) {
            smallest = leftChild;
        }
        if (rightChild < heap.size() && heap[rightChild]->priority < heap[smallest]->priority) {
            smallest = rightChild;
        }

        if (smallest != index) {
            swap(heap[index], heap[smallest]);
            siftDown(smallest);
        }
    }
};

#endif // MinHeap_H
