#include <bits/stdc++.h>
using namespace std;
int main(){
  //forward list==>singly linked list
  //push_front(),pop_front()==>only
  //----------------------------------
  //function
  //assign()
  //push_front() = emplace_front()
  //pop_front()
  //insert_after(pos,val)==> cause the are the reverse ptr
  //erase_after(pos,val)
  //remove(val)==>remove the value from the whole list
  //befor_begin()==>ptr befor the first position
  //not allow to "it--" only "it++"==> because it is singularity linked list
  //emplace_after()
  //next(begin(),step)

  forward_list<int>l1={1,3,5,7};
  forward_list<int>l2={2,4,6};
  l1.splice_after(l1.begin(),l2,l2.begin());
  for(auto it:l1){
    cout<<it<<endl;
  }

}