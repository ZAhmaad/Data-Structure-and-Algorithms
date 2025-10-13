#include <iostream>
using namespace std;

#define N 5   

int QUEUE[N];
int front = -1;
int rear = -1;


void display();

void enqueue(int NEWDATA) {
    
    if ((front == 0 && rear == N - 1) || (front == rear + 1)) {
        cout << "Overflow! Cannot insert " << NEWDATA << endl;
        return;
    }

    
    if (front == -1) {  
        front = 0;
        rear = 0;
    }
    else if (rear == N - 1) {  
        rear = 0;
    }
    else {  
        rear = rear + 1;
    }

    
    QUEUE[rear] = NEWDATA;
    cout << "Inserted " << NEWDATA << " at position " << rear << endl;
    display();
}


void dequeue() {
    
    if (front == -1) {
        cout << "Underflow! Queue is empty." << endl;
        return;
    }

    
    int DATATOREMOVE = QUEUE[front];
    cout << "Deleted element: " << DATATOREMOVE << " from position " << front << endl;

    
    if (front == rear) {  
        front = -1;
        rear = -1;
    }
    else if (front == N - 1) {  
        front = 0;
    }
    else {  
        front = front + 1;
    }

    display();
}


void display() {
    if (front == -1) {
        cout << "Queue is empty.\n";
        cout << "Front index = " << front << ", Rear index = " << rear << endl;
        cout << "------------------------------" << endl;
        return;
    }

    cout << "Queue elements: ";
    int i = front;
    while (true) {
        cout << QUEUE[i] << " ";
        if (i == rear) break;
        i = (i + 1) % N;  
    }
    cout << endl;

    cout << "Front index = " << front << ", Rear index = " << rear << endl;
    cout << "------------------------------" << endl;
}

int main() {
    cout << "=== Circular Queue Demonstration ===\n\n";

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    cout << "\nTrying to insert another element:\n";
    enqueue(60);  // Overflow expected

    cout << "\nPerforming two dequeues:\n";
    dequeue();
    dequeue();

    cout << "\nInserting 60 and 70 again (wrap-around expected):\n";
    enqueue(60);
    enqueue(70);

    cout << "\nDequeuing all elements:\n";
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    cout << "\nTrying to dequeue from empty queue:\n";
    dequeue();  // Underflow expected

    return 0;
}
