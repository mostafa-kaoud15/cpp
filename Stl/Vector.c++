#include <iostream>
#include <vector>
#include <algorithm>
#include "deque"
using namespace std;
int main()
{
    //vector function
    /*
    // at(): Returns a reference to the element at the specified position, with bounds checking.
    // front(): Returns a reference to the first element.
    // back(): Returns a reference to the last element.
    // data(): Returns a direct pointer to the memory array used internally by the vector to store its

    //Modifiers==>
    // push_back(): Adds an element to the end.
    // pop_back(): Removes the last element.`
    // insert(from,elements): Inserts elements at a specified position.
    // erase(from,to +1): Removes elements from a specified 'من7'ge.
    // clear(): Removes all elements.

    // size(): Returns the number of elements.
    // empty(): Returns whether the vector is empty.
    // reserve(from , to): Increases the capacity of the vector.
    // capacity(): Returns the current capacity of the vector.
    // shrink_to_fit(): Reduces the capacity to fit the number of elements
    // resize(from,to+1)

     //swap()==>swap between two vector
    */

    //general function
   /* //reverse(begin(),end());
    //min_element(begin(),end())
    //max_element(begin(),end())
    //sort(begin(),end())
    //find_if(begin(),end(),function return bool and take int)
    //copy(begin(),end(),the first place to insert the value)*/

     //vector<int> v={1,2,3,3};

     /*for(auto item:v)
     {
       cout<<item<<'\t';
     }*/

   //dequeue
   //its like vector==>but can push front , push back , pop front , pop back

    int n;
    int nn;
    int value;
    cout<<"n , nn , value : ";
    cin>>n>>nn>>value;
    vector<vector<int>>v(n,vector<int>(nn,value));
    for(int i=0;i<v.size();i++)
      {
        for(int j=0;j<v[i].size();j++)
          {
            cout<<v.at (i).at (j);
          }
          cout<<endl;
      }










   return 0;
}