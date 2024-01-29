#include <iostream>
using namespace std;
class List
{
private:
    int data;
    List *next;
    List *Head;

public:
    List()
    {
        Head = nullptr;
    }
    // add value from the back
    void puch_back(int value)
    {
        List *new_List = new List();
        new_List->data = value;
        if (Head == nullptr)
        {
            Head = new_List;
        }
        else
        {
            List *tra = Head;
            while (tra->next != nullptr)
            {
                tra = tra->next;
            }
            tra->next = new_List;
        }
        new_List->next = nullptr;
    }

    // add value from the front ==> backword

    void push_front(int value)
    {
        List *newNode = new List();
        newNode->data = value;
        newNode->next = Head;
        Head = newNode;
    }

    // remove the value from list
    bool remove_value(int value)
    {

        if (Head->data == value)
        {
            Head = Head->next;
            return true;
        }

        List *tra = Head;
        List *pre = Head;

        while (tra != nullptr && tra->data != value)
        {
            pre = tra;
            tra = tra->next;
        }
        if (tra == nullptr)
        {
            cout << "the value was actully removed" << endl;
            return false;
        }

        pre->next = tra->next;
        delete (tra);
        return true;
    }

    // print value of list
    void print_list()
    {
        List *tra = Head;
        while (tra != nullptr)
        {
            cout << tra->data << "\t";
            tra = tra->next;
        }
        cout << endl;
    }
};

int main()
{
    List lst;

    lst.puch_back(3);
    lst.puch_back(9);
    lst.puch_back(7);
    lst.puch_back(8);
    lst.puch_back(19);

    cout << "befor remove 9" << endl;
    lst.print_list();

    lst.remove_value(9);

    cout << "after remove 9" << endl;
    lst.print_list();

    lst.push_front(300);

    cout << "after add 300 in front" << endl;
    lst.print_list();

    lst.remove_value(300);

    cout << "after remove 300" << endl;
    lst.print_list();
}