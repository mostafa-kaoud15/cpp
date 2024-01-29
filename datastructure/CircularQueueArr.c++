#include <iostream>
using namespace std;
template <class t>
class c_queue
{
private:
    t *arr;
    int front;
    int rare;
    int size;

public:
    // ctor to initial elements
    c_queue(int size)
    {
        this->size = size;
        rare = front = -1;
        arr = new t[size];
    }

    // puch ==> O(1)
    void enqueue(t element)
    {
        // rare = (++rare) % size;
        if (rare == -1)
        {
            front = rare = 0;
            arr[rare] = element;
        }
        else if ((rare + 1) % size == front)
        {
            cout << "queue is full " << endl;
        }
        else
        {
            rare = (++rare) % size;
            arr[rare] = element;
        }
    }

    // pop value ==> o(1)
    t dequeue()
    {
        if (front == rare)
        {
            t temp = arr[front];
            front = rare = -1;
            return temp;
        }
        else if (front == -1)
        {
            cout << "queue is empty";
            return -1;
        }
        else
        {
            t temp = arr[front];
            front = (front + 1) % size;
            return temp;
        }
    }

    // display ==> O(n)
    void print()
    {
        if (front == -1)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            for (int i = front; i != rare; i = (i + 1) % size)
            {
                cout << arr[i] << "\t";
            }
            cout << arr[rare] << "\n";
        }
    }
};
int main()
{
    c_queue<int> q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    cout << q.dequeue() << endl;
    q.print();
}