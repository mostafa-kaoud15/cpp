#include <bits/stdc++.h>
using namespace std;
int main()
{
    //multimap it is used when i need container contain a collection of KeyValue pair and nonunique it's operation O(log(n))

    //multimap it is the map but can insert the muli key(one key with muli value)
    multimap<string,int>mapp;
    //can't insert the element using the indexer
    //but can insert using insert(pair<>) function
    //find(key)==>return the first iterator of the key in the multimap
    mapp.insert ({"mostafa",5});
    mapp.insert ({"ahmed",1});
    mapp.insert ({"mahmoud",7});
    mapp.insert ({"ahmed",18});
    auto it=mapp.find ("ahmed");

    //this the way to find all the value of the key ==>
    for(auto itt=it ; itt!=mapp.end();itt++)
      {
        if(itt->first!="ahmed")break;
        cout<<itt->first<<"\t"<<itt->second<<endl;
      }


}