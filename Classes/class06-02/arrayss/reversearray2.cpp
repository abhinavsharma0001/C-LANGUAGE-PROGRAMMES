

#include<iostream>
using namespace std;
//print the reverse number of array without  storing reverse array.
void printReverse(int arr[], int n){
    for(int i = n - 1 ; i>= 0 ; i--){
        cout<< arr[i] << " ";
    } 
}

int main(){

    int arr[5] = {10,20,30,40,50};
    int n = 5 ;
    printReverse(arr , n);
   
    return 0;
}