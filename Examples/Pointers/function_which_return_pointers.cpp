#include <iostream>

using namespace std;

int *max(int*, int*);
int main(){

    int i=3, j=5;

    int *p;

    p=max(&i, &j);

    cout<<*p<<endl;

    return 0;
}


int *max(int* x, int* y){

    if (*x>*y)
        return x;
    else
        return y;
}
