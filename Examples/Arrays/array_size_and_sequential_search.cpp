#include <iostream>
#define size (sizeof(a)/sizeof(a[0]))
using namespace std;

int seqSearch(int b[], int length, int number);

int main(){

    int a[5]={3, 10, 25, 26, 27};
    int location;
    location=seqSearch(a, size, 25);
    cout<<location;


    return 0;
}

int seqSearch(int b[], int length, int number){

    int i=0;
    for(; i<length; i++){
        if (b[i]==number)
            return i;
    }
    return -1;


}
