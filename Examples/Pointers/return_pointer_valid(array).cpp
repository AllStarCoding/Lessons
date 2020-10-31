
#include <iostream>

using namespace std;

int *max(int a[], int size);


int main()
{
    int a[2]={7,5}, *p;
    p=max(a, 2);
    cout<<*p;
}
int *max(int a[], int size)
{
    if (a[size-2]>a[size-1])
    {
        return &a[size-2];}
    else
        {

            return &a[size-1];
        }
}
