#include <iostream>
#define size (sizeof(a)/sizeof(a[0]))
using namespace std;

int binarySearch(int b[], int length, int number);

int main(){

    int a[]={16, 19, 22, 24, 27, 29, 37, 40, 43, 44, 47, 52, 56, 60, 64, 71};
    int location;
    location=binarySearch(a, size, 47);
    cout<<location;
    return 0;
}

int binarySearch(int b[], int length, int number){

    int bottom=0;
    int top=length-1;
    int middle;
    bool found=false;
    int location = -1;

    while (bottom<=top && !found){
        middle=(bottom+top)/2;
        if (b[middle]==number){
            found=true;
            location=middle;
        }
        else if (b[middle]<number)
            bottom=middle+1;
        else
            top=middle-1;
    }
    return location;
}
