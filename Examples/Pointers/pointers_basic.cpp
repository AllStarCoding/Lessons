#include <iostream>

using namespace std;

int main(){

    int *p, i;
    i=5;
    p=&i;
    int j=10;
    int k=6;
    int l=5;

    cout<<*p<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<&i<<endl;
    cout<<*&i<<endl;
    cout<<&j<<endl;
    cout<<&k<<endl;
    cout<<&l<<endl;
    *p=4;
    cout<<endl;
    cout<<*p<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<&i<<endl;
    cout<<*&i<<endl;
    cout<<&j<<endl;
    cout<<&k<<endl;
    cout<<&l<<endl;

    cout<<endl;
    i=20;
    cout<<endl;
    cout<<*p<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<&i<<endl;
    cout<<*&i<<endl;
    cout<<&j<<endl;
    cout<<&k<<endl;
    cout<<&l<<endl;
    return 0;
}
