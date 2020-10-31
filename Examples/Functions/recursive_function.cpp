#include <iostream>

int formula(int term);

int main(){
using namespace std;
int n;
cout<<"Input the term number: ";
cin>>n;
cout<<"The answer for term "<<n<<" is "<<formula(n);


return 0;

}

int formula(int term){

    if (term==1)
        return 3;
    else
        return formula(term-1)+2;

}
