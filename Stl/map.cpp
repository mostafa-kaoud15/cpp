#include <bits/stdc++.h>
using namespace std;
int findD(vector<int>&s){
  for(int i=0;i<s.size();i++)
    {
      //1,4,5,6,7,0,4
      int index=abs(s[i])-1;
      if(s[index]<0)
        {
          return abs(s[i]);
        }
        else
        {
          s[index]*=-1;
        }
    }
}
int main()
{
  //it is used for needing a collection with key value pair and with unique key and operation O(log(n))
  //map function
  /*
      //insert(pair<>)
      //erase(key)
      //find(key) ==> return the iterator to the pair of the key
      //count(key)==> to find the all value of key
      //size()==> O(1)
      //clear()
  */

  //this is the hashing ==> it is binary tree
  //key value pair to search element in O(long(n)) by key
  //key can't be duplicated


  //map ==>ordered(self sorted based the key)
  //push value by using index of the insert function
  //time complexty for all operation ==> O(log(n))


   //difference  (insert <==>  indexer )
    /*
       //insert ==> if the key is found not do anything
       //indexer==> if the key is found then modify the value of the key with new value
     */

    vector<int>v{1,5,6,6,7,0,4,3};
    for(int i=0;i<v.size();i++)
    {
      int index=abs(v[i]);
      if(v[index]<0)
        {
          cout<<v[i]<<endl;
          break;
        }
        else
        {
          //cout<<v[i]<<'\t'<<v[index]<<endl;
          v[index]*=-1;
        }
    }

    



    

}