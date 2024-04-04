#include <iostream>
using namespace std;

class Queue
{
    int front, rear, capacity;
    int *queue;

public:
    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
        queue = new int;
    }
    ~Queue() { delete[] queue; }

    void enqueue(int data)
    {
        if (capacity == rear)
        {
            cout << "Queue is full\n";
            return;
        }
        else
        {
            queue[rear] = data;
            rear++;
        }
    }
    void dequeue()
    {
        if (front == rear)
        {
            cout << "Queue is empty\n";
            return;
        }
        else
        {
            for (int i = 0; i < rear - 1; i++)
            {
                queue[i] = queue[i + 1];
            }
            rear--;
        }
    }

    int peek()
    {
        if (front == rear)
        {
            cout << "Queue is empty\n";
            return -1;
        }
        return queue[front];
    }

    bool isEmpty()
    {
        return front == rear;
    }
};

int main()
{
    Queue q(5);

    // Demonstrate enqueue operation
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    // Demonstrate dequeue operation
    q.dequeue();

    // Check front element
    cout << "Front element is: " << q.peek() << endl;

    // Check if queue is empty
    cout << "Queue empty: " << (q.isEmpty() ? "True" : "False") << endl;

    return 0;
}