#include <iostream>
using namespace std;
int save[1000];
int fibo(int num)
{
    if (num == 0 || num == 1)
        return num;

    if (save[num] != -1)
    {
        return save[num];
    }

    
    return save[num]=fibo(num-1)+fibo(num-2);

}

int main()
{
    fill(save, save + 1000, -1);
    cout<<fibo(5);
}