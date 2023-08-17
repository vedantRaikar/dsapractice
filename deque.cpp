//
// Created by vedant raikar on 17-08-2023.
//queue in which insertion and deletion can be done from both the ends there is no lifo or fifo

#include <iostream>
using namespace std;

class Deque {
private:
    int *arr;
    int front, rear, size;

public:
    Deque(int maxSize) {
        size = maxSize;
        arr = new int[size];
        front = -1;
        rear = 0;
    }

    bool isFull() {
        return ((front == 0 && rear == size - 1) || front == rear + 1);
    }

    bool isEmpty() {
        return front == -1;
    }

    void insertFront(int key) {
        if (isFull()) {
            cout << "Overflow: Deque is full" << endl;
            return;
        }

        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (front == 0)
            front = size - 1;
        else
            front = front - 1;

        arr[front] = key;
    }

    void insertRear(int key) {
        if (isFull()) {
            cout << "Overflow: Deque is full" << endl;
            return;
        }

        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (rear == size - 1)
            rear = 0;
        else
            rear = rear + 1;

        arr[rear] = key;
    }

    void deleteFront() {
        if (isEmpty()) {
            cout << "Underflow: Deque is empty" << endl;
            return;
        }

        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (front == size - 1)
            front = 0;
        else
            front = front + 1;
    }

    void deleteRear() {
        if (isEmpty()) {
            cout << "Underflow: Deque is empty" << endl;
            return;
        }

        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (rear == 0)
            rear = size - 1;
        else
            rear = rear - 1;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Deque is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    int getRear() {
        if (isEmpty() || rear < 0) {
            cout << "Deque is empty" << endl;
            return -1;
        }
        return arr[rear];
    }

    ~Deque() {
        delete[] arr;
    }
};

int main() {
    Deque dq(5);

    dq.insertFront(10);
    dq.insertRear(20);
    dq.insertFront(5);

    cout << "Front element: " << dq.getFront() << endl;
    cout << "Rear element: " << dq.getRear() << endl;

    dq.deleteFront();
    dq.deleteRear();

    cout << "Front element after deletion: " << dq.getFront() << endl;
    cout << "Rear element after deletion: " << dq.getRear() << endl;

    return 0;
}
