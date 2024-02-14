#include <bits/stdc++.h>
using namespace std;
int main()
{
  //set ==> it is used when i need container to store sorted unique value and its operator O(log(n)) ==>(insert(),erase(),find(),count())
  //add as sorted
  //unique
  //read only
  //set function ==> all take O(log(n))
  /*//insert(element) the only way to insert value in the set
  //erase(element) the only one to delete the elemnt from the set
  //find(element) return iterator to the element
  //count(element) ==> it is used to count the number of element ==>  only be one in set*/

  //function
  //insert(val)
  //erase()
  set<int> s = {2, 2, 2,0, 6, 4, 5,6, 4, 3};
  /*auto it =s.find(5);
  //cout<<*it;
  cout<<s.count(30);
   //multiset ==> it is used when we need container of sorted non_unique value
  s.insert(4);*/
  auto to=s.upper_bound(5);
  auto from =s.lower_bound(3);
  s.erase(from,to);
  for(auto it=s.begin();*it<=4;it++)
    cout<<*it<<endl;

}