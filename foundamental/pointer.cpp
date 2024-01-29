
//pointer is a reference that refer to the memory location
//it is used to creat space in heap using(malloc(size):void,new
//it is used to deallocate this space to prevent memory leak using (delete , free(ptr))
//it is used to pointer to function return_type (*name)(parameter list)
#include<iostream>
using namespace std;
//greater check function
bool is_greater(int left,int right)
{
  return left>=right;
}

//key function
bool is_true(bool (*fun)(int left,int right),int left,int right)
{

  return fun(left,right);

};

int main()
{
  //mermory location and deallocation
  int *intvalue=new int;
  delete intvalue;//delete value in heap but not the pointer intvalue

  int *intarr=new int[5];
  delete intarr;

  int v=5;
  int *m=&v;
  //delete m; //invlide cause it pointer the stack location

  //pointer to function (anonymous function)
  //two ways to implement the anonymous function
  //1 - assign the built function name to it
  //2 - using lambda expression

  //assign the name to anonymous function to it
  auto myfunc=is_greater;// = bool (*func)(int left,int right)=is_greater;


  //lambda expression => it is used for implement the anonymous function
  bool (*isval) (int x,int y)=[](int left,int right)->bool{return left>=right;};

  cout<<"using assing function \"is_greater\" : "
      <<boolalpha<<is_true(myfunc,500,5)<<endl;

  cout<<"using lambda expression function : "
      <<boolalpha<<is_true(isval,500,5)<<endl;
}