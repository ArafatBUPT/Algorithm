#include <iostream>
#include "stdlib.h"
using namespace std;

void BubbleSort(int arr[],int n){
    //第一循环设置每次的循环次数 第一次循环n-1次 第二次n-2次
    for (int i = 0; i < n-1; ++i) {
        //每次循环次数减少
        for (int j = 0; j <n-i-1; ++j) {
            if (arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

void SelectionSort(int arr[],int n){

    //每次循环把第i个元素设成最小
    for (int i = 0; i < n; ++i) {
        int minIndex=i;
        //每循环一次 和 minIndex比较 最后 交换位置
        for (int j = i+1; j < n ; ++j) {
            if (arr[j]<arr[minIndex])
                minIndex=j;
        }
        swap(arr[i],arr[minIndex]);
    }
}

void InsertionSort(int arr[],int n){

    //从第二个元素开始 往前比较
    for (int i = 1; i < n ; ++i) {
        //每次把循环开始的元素存起来 跟前面比，比它大就赋值给当前元素
        int temp=arr[i],j;
        for (j = i; j >0 && arr[j-1]>temp; --j) {
            arr[j]=arr[j-1];
        }
        arr[j]=temp;
    }
}

void merge(int arr[],int l,int mid,int r){
    //设一个辅助数组 把分治好的元素存放在这个数组中
    int aux[r-l+1];
    for (int i = l; i <=r ; ++i) {
        aux[i-l]=arr[i];
    }

    // i 指向 辅助数组的第一元素 j指向辅助数组的中间+1
    int i=l;
    int j=mid+1;

    //k 从第一元素遍历 按大小赋值给arr数组
    for (int k = l; k <=r ; ++k) {
        if (i>mid){
            arr[k]=aux[j-l];
            j++;
        }
        else if (j>r){
            arr[k]=aux[i-l];
            i++;
        }
        else if (aux[i-l]<aux[j-l]){
            arr[k]=aux[i-l];
            i++;
        } else {
            arr[k]=aux[j-l];
            j++;
        }
    }
}
void mergeSort(int arr[],int l,int r){
    //分成一个元素后 返回
    if(l>=r)
        return;

    //设mid为数组中间位置
    int mid = l+(r-l)/2;

    //递归分成单个元素 再合并
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
void mergeSort(int arr[],int n){
    // 递归函数
    mergeSort(arr,0,n-1);
}

int partition(int arr[],int l,int r){
    int v = arr[l];
    int j=l;
    for (int i = l+1; i <=r ; ++i) {
        if (arr[i] < v) {
            swap(arr[j + 1], arr[i]);
            j++;
        }
    }
    swap(arr[l],arr[j]);
    return j;
}
void quickSort(int arr[],int l,int r){
    if(l>=r)
        return;

    int p = partition(arr,l,r);
    quickSort(arr,l,p-1);
    quickSort(arr,p+1,r);
}
void quickSort(int arr[],int n){
    quickSort(arr,0,n-1);
}









int main() {

    int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i]=rand()%10+1;
    }
    //BubbleSort(arr,10);
    //SelectionSort(arr,10);
    //InsertionSort(arr,10);
    //mergeSort(arr,10);
    quickSort(arr,10);
    for (int j = 0; j < 10; ++j) {
        cout<<arr[j]<<' ';
    }
    return 0;
}