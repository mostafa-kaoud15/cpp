#include <iostream>
using namespace std;
// first in first out (fifo)
//  disadvantage is When elements are dequeued (removed),
//--> the vacant space at the front of the queue is not reused.
// position is added only one

template <class t>
class queue
{
private:
    t *arr;
    int front;
    int rare;
    int size;

public:
    // initial the element
    queue(int size)
    {
        arr = new t[size];
        front = rare = -1;
        this->size = size;
    }

    // push element ==> O(1)
    bool push(t element)
    {
        if (rare == -1)
        {
            front = rare = 0;
            arr[rare] = element;
            return true;
        }
        else if (rare == (size - 1))
        {
            cout << "queue is full \t" << endl;
            return false;
        }
        arr[++rare] = element;
        return true;
    }

    // pop value ==> from the fist of queue O(1)
    t pop()
    {
        if (rare == -1 || rare < front)
        {
            cout << "queue is empty\t";
            return -1;
        }

        t temp = arr[front];
        front++;
        return temp;
    }

    // display ==> O(n)
    void print()
    {
        if (front > -1)
            for (int i = front; i <= rare; i++)
            {
                cout << arr[i] << "\t";
            }
        else
            cout << "queue is empty";
        cout << endl;
    }
};

int main()
{
    queue<int> q(5);
    cout << "pop : " << q.pop() << endl;
    q.push(7);
    q.push(9);
    q.push(18);
    q.push(5);
    q.push(13);
    cout << "pop : " << q.pop() << endl;
    q.print();
}
