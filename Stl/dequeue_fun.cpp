#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>q={1,2,3,4,5,6};
    //push_back()==>O(1)
    //push_font()==>O(1)
    //pop_front()==>O(1)
    //pop_back()==>O(1)
    //front(),back ==> O(1)
    //insert()==>O(n)
    //position.insert(position.begin(),first.begin(),first.end())
    //erase()==>O(n)
    deque<int>qq={1,3,5,4};
    q.insert(q.begin(),qq.begin(),qq.end());

    for(auto it:q){
      cout<<it<<"\t";
    }





}