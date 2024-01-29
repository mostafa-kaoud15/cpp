#include <iostream>
using namespace std;
static int y = 0;
int recursive(int value)
{
    if (value == 1 || value==10)
    {
        return value;
    }
    cout<<value;
    int x=recursive(value--);
    int xx=recursive(value++);
    
   return x ;
}
int main()
{
   recursive(9);

    return 0;
}