#include <iostream>
#include<vector>
using namespace std;
void merge_sort(vector<int> arr,int left,int right)
{
    if(left<right){
        int middle=(right-left)/2;
        merge_sort(arr,left,middle);
        merge_sort(arr,middle+1,right);
        
    }

}
int main()
{

}