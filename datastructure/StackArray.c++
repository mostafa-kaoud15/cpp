#include <iostream>
using namespace std;

template <class t>
class Stack
{
private:
    t *arr;
    int size;
    int last;

public:
    Stack(int size)
    {
        this->size = size;
        last = -1;
        arr = new t[size];
    }

    // add value
    //O(1)
    bool push(t element)
    {
        if (last <= size - 2)
        {
            arr[++last] = element;
            return true;
        }

        cout << "stack overflow" << endl;
        return false;
    }

    // remove value
    //O(1)
    t pop()
    {
        if (last > -1)
        {
            t temp = arr[last];
            last--;
            return temp;
        }

        cout << "stack underflow";
        return -1;
    }

    // print vlaue
    void print()
    {
        for (int i = 0; i <= last; i++)
        {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }
};

int main()
{
    Stack<int> istack(5);

    istack.push(1);
    istack.push(2);
    istack.push(3);
    istack.push(4);
    istack.push(5);
    istack.push(1);
    cout << "pop : " << istack.pop() << endl;
    cout << "pop : " << istack.pop() << endl;

    istack.print();
}