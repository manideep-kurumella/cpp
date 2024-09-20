#include<iostream>
#include "../include/array_util.h"

/*
1. divide array by recursion 
2.merge two sorted arrays in sorted order . 
*/

void merge(int *array,int low,int mid, int high){
    int temp_size = high-low;
    int *temp = new int[temp_size];
    std::cout<<"low="<<low<<" mid="<<mid<<" high="<<high<<"temp_size="<<temp_size<<std::endl;
    int left = low;
    int right = mid+1;
    int tp = 0; 
    while(left<=mid && right<=high){
        if(array[left]<=array[right]){
            temp[tp] = array[left];
            left++;
        }
        else{
            temp[tp] = array[right];
            right++;
        }
        tp++;
    }
    while(left<=mid){
        temp[tp]=array[left];
        tp++;
        left++;
    }
    while(right<=high){
        temp[tp] = array[right];
        right++;
        tp++;
    }

    for(int i=low;i<=high;i++){
        array[i] = temp[i-low];
    }

}

void merge_sort(int *array,int left,int right){
    if(left>=right) return;
    int mid = (left+right)/2;
    merge_sort(array,left,mid);
    merge_sort(array,mid+1,right);
    merge(array,left,mid,right);
}

int main(){

    int *array;
    int array_size;

    std::cout<<"Enter the size of the array : ";
    std::cin>>array_size;
    array = new int[array_size];

    std::cout<<"Enter Array Elements:"<<std::endl;

    for(int i=0;i<array_size;i++){
        std::cin>>array[i];
    }

    std::cout<<"array elements before performing merge sorting : "<<std::endl;
    print_array(array,array_size);
    merge_sort(array,0,array_size-1);
    std::cout<<"array elements after performing merge sorting : "<<std::endl;
    print_array(array,array_size);
    return 1;
}