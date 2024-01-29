#include <iostream>
using namespace std;
template <class t>
class StackList
{
private:
    t data;
    StackList *next;
    StackList *head;
    StackList *lst;

public:
    StackList()
    {
        head = lst = nullptr;
    }

    // add value
    // with lst pointer it will be O(1)
    // without lst pointer it will be  O(n)
    void push(t value)
    {
        StackList *newNode = new StackList;
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = lst = newNode;
        }
        else
        {
            lst->next = newNode;
            lst = newNode;
        }
    }

    // print value
    // always => O(n)
    void print()
    {
        StackList *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << '\t';
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    StackList<int> st;
    st.print();

    return 0;
}