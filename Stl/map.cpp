#include <bits/stdc++.h>
using namespace std;
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

  //solve this problem
  /*vector<pair<string,int>>vpair;
  vpair.emplace_back("mostafa",1);
  vpair.emplace_back("ahmed",18);
  vpair.emplace_back("nader",30);
  vpair.emplace_back("karem",-5);

  for(auto item:vpair)
    {
      if(item.first=="nader"){
        cout<<item.first<<"\t"<<item.second<<"\t"<<endl;
        break;

      }
    }
*/

  //map ==>ordered(self sorted based the key)
  //push value by using index of the insert function
  //time complexty for all operation ==> O(log(n))


   //difference  (insert <==>  indexer )
    /*
       //insert ==> if the key is found not do anything
       //indexer==> if the key is found then modify the value of the key with new value
     */

  map<string,int>mapp;
  mapp["mostafa"]=1;
  mapp["mostafa"]=3;
  mapp["ahmed"]=4;
  mapp["nader"]=6;
  mapp["ibrahim"]=15;
  mapp.erase ("mostafa");
  for(auto item : mapp){
    cout<<item.first<<"\t"<<item.second<<endl;
  }


  /*for(auto it=mapp.begin();it!=mapp.end();it++)
  {
    cout<<it->first<<"\t"<<it->second<<endl;
  }*/

  return 0;
}