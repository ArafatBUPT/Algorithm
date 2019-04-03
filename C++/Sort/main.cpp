#include <iostream>
#include "stdlib.h"
using namespace std;

void static BubbleSort(int arr[],int n){
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j <n-i-1; ++j) {
            if (arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

















int main() {

    int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i]=rand()%10+1;
    }
    BubbleSort(arr,10);

    for (int j = 0; j < 10; ++j) {
        cout<<arr[j]<<' ';
    }
    return 0;
}