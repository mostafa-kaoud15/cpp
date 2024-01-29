#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
  //push
  //pop
  //top
  stack <int>st;
  st.push (1);
  st.push (2);
  st.push (3);
  st.push (4);


  //empty stack
   while(!st.empty())
    {
       cout<<st.top()<<endl;
       st.pop();
    }
    if(st.empty())cout<<"empty\n";




}