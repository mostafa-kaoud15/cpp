#include <bits/stdc++.h>

using namespace std;
bool compar(pair<int,int>p,pair<int,int>pp)
{
    return p.second < pp.second;
}
int main()
{

    //pair is used to link two element with each other
    //use function make_pair to creat a pair
    pair<string,int>pair_1;
    pair_1=(make_pair ("mostafa",15));
    vector<pair<string,int>>par;
    par.push_back ({"mostafa",6});
    par.push_back ({"ahmed",8});
    par.push_back ({"nader",9});
    for(auto it:par){
      cout<<it.first<<'\t';
      cout<<it.second<<endl;
    }

    //sort(from, to , condition function) function ==>it is sort decreasing using the first by default


}