#include <iostream>
using namespace std;
int main()
{
    // to repete a blok of code specific undercondetion
    // while
    long long sum = 0;
    int n;
    cout << "n : 5" << endl;
    // cin >> n;
    n = 5;
    while (n > 0)
    {
        sum += n;
        n--;
    }
    cout << "sum using while: " << sum << endl;

    // for
    for (int i = 0; i <= 5; i++, cout << i << "   ")
    {
    }
    cout << endl;

    for (int i = 0, j = 7; i <= 84 && j < 20; i += j, j++)
    {
        cout << "i : " << i << "\tj : " << j
             << endl;
    }
}