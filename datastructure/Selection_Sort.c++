// find the smallest element in the list and add it in its position
// advatage ==> it is simpile algorithm
// disadvatage ==> it dosn't know if the arr is actuly sorted or not

// time comlixty O(n^2)
// space comlixty O(1)

#include <iostream>
using namespace std;
template <class t>
void selection_sort(t arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
int main()
{
    int arr[] = {7, 3, 11, 8, 6};
    selection_sort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}