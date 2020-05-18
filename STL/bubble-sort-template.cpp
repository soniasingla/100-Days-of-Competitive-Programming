//In this, we will implement bubble sort using templates
#include<iostream>
using namespace std;
template <class T>
void bubble_sort(T a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;i<j;j--)
        {
            if(a[j]<a[j-1])
            {
                swap(a[j],a[j-1]);
            }
        }
    }
}

int main()
{
    int a[5]={23,34,645,43,433};
    int n = sizeof(a)/sizeof(a[0]);
    bubble_sort(a,5);
    cout<<"The sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
