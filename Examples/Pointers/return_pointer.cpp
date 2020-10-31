
#include <iostream>

using namespace std;

int *max(int *a, int *b);


int main()
{
    int x=5, y=7, *p;
    p=max(&x, &y);
    cout<<*p;
}
int *max(int *a, int *b)
{
    if (*a>*b)
        return a;
    else
        return b;
}
