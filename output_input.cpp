#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double y = 15;
    double c = 90;

    // setw()==>it will be ignored if the num width greater than setw()
    // cout << setw(100)<<y <<endl;

    // setpercision()
    /*
        cout << fixed << setprecision(5) << y<<endl;
        cout<<c;
    */

    // setiosflags(ios::)<<;
    /*
        cout << setw(20) << setiosflags(ios::scientific) << y << endl;
        cout << setiosflags(ios::fixed) << c << endl;
    */

    // showbase<<oct,dec,hex,bin<<num;
    /*
        cout << showbase << hex << 90 << endl;
        cout<<showbase<<dec;
        cout << 21 << endl;
    */

    // boolalpha()<<true,false;
    /*
        cout << boolalpha << (5 > 2) << endl;
        cout<<noboolalpha;
        cout << (2 > 5) << endl;
    */

    // getline(from,to,seperator);
    /*
         string first_name,last_name;
         getline(cin,first_name,'|');
         getline(cin,last_name,'|');
         cout<<first_name<<" "<<last_name;
         cout<<endl;
    */

    // istringstream==>deal as cin>>
    /*
        istringstream istt("mostafa kaoud");
        string fname, lname;
        istt >> fname >> lname;
        cout << fname << " " << lname << endl;
    */
   cout<<"ABC";
    return 0;
}
