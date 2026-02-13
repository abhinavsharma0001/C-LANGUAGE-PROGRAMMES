//Swap any 2 index numbers using a third variable

#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,12,14,16};
    int temp;

    temp=arr[0];
    arr[0]= arr[3];
    arr[3]= temp;

    cout<<arr[0]<< endl<< arr[3];
    return 0;
}