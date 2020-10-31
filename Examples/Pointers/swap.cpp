#include <iostream>

using namespace std;

void swap (int* , int* );
int main(){


    int i=3, j=5;
    swap(&i, &j);
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<"variable i in the main function has the address of "<<&i<<endl;
    cout<<"variable j in the main function has the address of"<<&j<<endl;
    return 0;
}

void swap(int* x, int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<"pointer x contains the address of"<<x<<endl;
    cout<<"pointer y contains the address of"<<y<<endl;
    cout<<"The address of the actual pointer x is"<<&x<<endl;
    cout<<"The address of the actual pointer y is"<<&y<<endl;
}
