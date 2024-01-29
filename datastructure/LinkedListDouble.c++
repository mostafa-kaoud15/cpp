#include <iostream>
using namespace std;
template <class t>
struct node
{
private:
    t data;
    node *next;
    node *pre;
    node *Head = nullptr;
    node *tail = nullptr;

public:
    void push_back(t value)
    {
        node *newNode = new node();
        newNode->data = value;
        tail = newNode;

        if (Head == nullptr)
        {
            Head = newNode;
            newNode->pre = nullptr;
        }
        else
        {
            node *tra = Head;
            while (tra->next != nullptr)
            {
                tra = tra->next;
            }
            tra->next = newNode;
            newNode->pre = tra;
        }
        newNode->next = nullptr;
    }

    void print_forward()
    {
        node *tra = Head;
        while (tra != nullptr)
        {
            cout << tra->data << "\t";
            tra = tra->next;
        }
        cout << endl;
    }
    void print_backward()
    {
        node *tra = tail;
        while (tra != nullptr)
        {
            cout << tra->data << "\t";
            tra = tra->pre;
        }
        cout << endl;
    }
};

int main()
{
    node<int> list1;
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(8);

    list1.print_backward();
    list1.print_forward();
}