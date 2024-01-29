#include<iostream>
#include <queue>
using namespace std;

int main()
{
  //queue
  //push,pop ==>push from the end and pop from the first
  queue<int>q;
  q.push (5);
  q.push (6);
  q.push (7);
//  cout<<++q.front()<<endl;
//  cout<<q.front()<<'\t';
  while(!q.empty()){
    q.pop ();
  }



  cout<<q.back()<<endl;



 // q.pop();
 //cout<< ++q.front();





}
