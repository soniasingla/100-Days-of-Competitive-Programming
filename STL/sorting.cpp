#include<iostream>
using namespace std;
void show(int a[5])
{
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int a[5]={23,42,53,6331,32};
    cout<<"Before Sorting: "<<endl;
    show(a);
    sort(a,a+5);
    cout<<"After Sorting: "<<endl;
    show(a);
    return 0;
}