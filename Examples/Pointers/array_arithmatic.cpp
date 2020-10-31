#include <iostream>

using namespace std;


int main(){

int a[10]={1, 2, 3, 4, 5, 6, 7};
int *p=a;

cout<<"The address of array a is "<<&a<<endl;
cout<<"The address of pointer p is "<<&p<<endl;
cout<<"Pointer p is holding the address of "<<p<<endl;
cout<<"Which you might think is the address of array a: "<<&a<<endl;
cout<<"But actually it is the address of a[0]: "<<&a[0]<<endl;
cout<<"You might think they are the same thing"<<endl;
cout<<"But take a look of the following: "<<endl;
cout<<"This is (&a)+1: "<<(&a)+1<<endl;
cout<<"This is a+1: "<<a+1<<endl;
cout<<"This is the value of a[1]: "<<*(a+1)<<endl;
cout<<"This is the value of a[1]: "<<p[1]<<endl;
cout<<"This is the value of a[1]: "<<*(p+1)<<endl;
p=p+1;
cout<<"This is the value of a[1]  : "<<*p<<endl;
cout<<"This is the value of  a[1] : "<<p[0]<<endl;
cout<<"This is the address of the pointer p is holidng right now: "<<p<<endl;
int i;
p=a;
for (i=0; i<10; i++){
    cout<<*(p+i)<<endl;

}
for (; p<a+10; p++)
{
    cout<<*p<<endl;
}






return 0;
}
