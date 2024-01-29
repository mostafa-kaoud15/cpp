#include <iostream>
#include <iomanip>
using namespace std;
/*void shape(int n)
{
    if (n == 0)
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<setw(-4)<<"*";
    }
    cout<<endl;
    shape(n-1);

}*/
void shape02(int n)
{
    if (n == 0)
    {
        return;
    }
    shape02(n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
    cout << endl;
}
// if n is odd out n/2 if it odd out n*+1;==>5 , 16, 8,4,2,1
int vale(int n)
{
    
    if (n == 1)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        int valee = vale(n / 2);
        return valee;
    }
    else
    {
        int valee = vale(n * 3+1);
        return valee;
    }cout<<n<<"\t";
}
//merge sort

int main()
{
    shape02(5);
  vale(5);
  cout<<endl;
}