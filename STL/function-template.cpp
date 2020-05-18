//One function works for all data-types
//A generic function for max()
//to run c++ program on cmd
//sudo g++ filename and then run ./a.out
#include<iostream>
using namespace std;
template <typename T>
T max_of_elements(T x, T y)
{
    return (x>y)? x: y;
}
int main()
{
    cout<<max_of_elements<int>(2,5)<<endl;
    cout<<max_of_elements<double>(3.0,5.5)<<endl;
    cout<<max_of_elements<char>('a','g')<<endl;
    return 0;
}
