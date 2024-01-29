#include <iostream>
using namespace std;
template <class T>
bool search(T collection[], int size, T find)
{
    for (int i = 0; i < 5; i++)
    {
        if (find == collection[i])
        {
            cout << i << endl;
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int element;
    cin >> element;
    cout << search(arr, 5, element) << endl;
}