//find out if a number is repeating in an array;
#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10, 20, 30, 20, 40, 50, 30};
    int search = 20;
    int count = 0;
    for(int i = 0; i < 7; i++) {
        if(arr[i] ==search) {
            count++;
        }
    }
    if(count == 1) {
        cout << "found no repeating";
    }else{
        cout << "found and repeating";
        cout << "\nrepeated " << count << " times";
    }
    return 0;
}
