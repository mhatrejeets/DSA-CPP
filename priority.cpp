#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class PriorityQueue {
public:
    struct Job {
        int jobId;
        int timePriority; // Lower timePriority means higher priority
    };

    Job pq[MAX_SIZE];
    int size;

    PriorityQueue() : size(0) {}

    void enqueue(int jobId, int timePriority) {
        if (size < MAX_SIZE) {
            pq[size].jobId = jobId;
            pq[size].timePriority = timePriority;
            size++;
        } else {
            cout << "Priority queue is full. Cannot enqueue." << endl;
        }
    }

    void dequeue() {
        if (size > 0) {
            int maxPriorityIndex = 0;
            for (int i = 1; i < size; i++) {
                if (pq[i].timePriority < pq[maxPriorityIndex].timePriority) {
                    maxPriorityIndex = i;
                }
            }
            // Swap with the last element
            pq[maxPriorityIndex] = pq[size - 1];
            size--;
        } else {
            cout << "Priority queue is empty. Cannot dequeue." << endl;
        }
    }

    void display() {
        cout << "Jobs in priority queue (jobId, timePriority):" << endl;
        for (int i = 0; i < size; i++) {
            cout << pq[i].jobId << ": " << pq[i].timePriority << endl;
        }
    }
};

int main() {
    PriorityQueue pq;
    pq.enqueue(1, 5);
    pq.enqueue(2, 3);
    pq.enqueue(3, 8);
    pq.enqueue(4, 2);
    pq.enqueue(5, 1);
    pq.enqueue(6, 9);
    pq.enqueue(7, 12);
    pq.enqueue(8, 4);

    pq.display();

    pq.dequeue();
    pq.dequeue();
    pq.dequeue();
    cout << "\nAfter removing an element:" << endl;
    pq.display();
    pq.dequeue();
    cout << "\nAfter removing an element:" << endl;
    pq.display();

    return 0;
}
