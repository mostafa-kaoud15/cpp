#include <iostream>
using namespace std;
template <class t>
bool bi_search(t arr[], int size, t element)
{
    int front = 0, back = size - 1;
    while (front <= back)
    {
        int mid = (front + back) / 2;
        if (element == arr[mid])
        {
            cout << mid << endl;
            return true;
        }
        else if (element > arr[mid])
        {
            front = mid + 1;
        }
        else
        {
            back = mid - 1;
        }
    }
    cout << "element is not founded " << -1 << endl;

    return false;
}
int main()
{
    int arr[] = {1, 4, 7, 9, 16, 20, 29};
    int element;
    cout << "search element : ";
    cin >> element;
    bi_search(arr, 7, element);
}