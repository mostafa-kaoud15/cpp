#include <bits/stdc++.h>
using namespace std;
int main()
{
  //at,front,back
  //size()
  //begin(),end()
  //---------------
  //puch_back()
  //pop_back()==>o(1)
  //insert()==>o(n)
  //erase()==>o(n)
  //clear()
  //swap()
  //-----------------
  //sort()==>O(nlogn)
  //reverse()==>O(n)
  //find()==>O(n)
  //min_element()
  //max_element()
  vector<int>v={1,4,7,5,8,2};
  auto it=std::minmax_element (v.begin (), v.end ());
  cout<<*it.first<<endl;




}