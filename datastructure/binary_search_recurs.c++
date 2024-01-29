#include <iostream>
using namespace std;
template <class t>
bool bi_search_rec(t *arr, int front, int back, t element)
{

    int mid = (front + back) / 2;
    if (front > back)
    {
        cout << "element is not founded " << endl;
        return false;
    }
    else if (arr[mid] == element)
    {
        cout << "it is founded at index : " << mid << endl;
        return true;
    }
    else if (arr[mid] < element)
    {
        return bi_search_rec(arr, mid + 1, back, element);
    }
    else
    {
        return bi_search_rec(arr, front, mid - 1, element);
    }
}

int main()
{
    int arr[] = {1, 4, 7, 9, 16, 20, 29};
    int element;
    cout << "search element : ";
    cin >> element;
    bi_search_rec(arr, 0, 6, element);

    return 0;
}