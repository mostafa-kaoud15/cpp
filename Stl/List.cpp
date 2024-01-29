#include <bits/stdc++.h>
using namespace std;
int main()
{
  //list ==> doubly linked list
  //add,remove(first,middle,last)->O(1)
  //can't access its element directly but by iterator=>O(n)

  //function
  //erase(itFrom,itTo)==>remove from the position"iterator"
  //insert(pos,value)
  //push_back()
  //pop_back()
  //push_front()
  //pop_front()
  //resize()==>O(n)
  //------------------
  //begin(),end()
  //can't use {begin()-1,end()-1} "-,+"
  //--insted use ==>
  //auto it=list.begin();
  //and then it++;
  //-----------------------------
  //**own function
  //remove(value)==>remove the value from all element==>O(n)
  //remove_if(functionName)
  //merge(list2)==>to merge two list in one and sorted it
  //---list2 in merge it is formatted after the merge
  //splice(list1.begin(),list2)==>merge the list2 to begin of list1 without sorted and format the list2
  //unique()==>remove all duplicated element(the same consecutive element)
  //sort()==>sort decreasing by default
  //---sort(greater<int>())
  //reverse()
  //there are no random access "[i]"






}