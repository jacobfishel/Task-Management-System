//linked list class to order tasks in order of their due date.

#ifndef MinHeap_H
#define MinHeap_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Node {

};

class MinHeap {

    public:
        MinHeap(){}

        void insert(Node* Task) {

        };
        Node* extractMin();
        bool isEmpty() const;
        size_t size() const;

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

    void diftDown(int index) {

    }

    
};

#endif // MinHeap_H