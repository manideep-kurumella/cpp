#include<iostream>
#include "../include/array_util.h"

/*
1. keep the array element at correct position while reading the new elemet .  
*/


void insertion_sort(int *array,int array_size){

    for(int i=0;i<array_size-1;i++){
        int j=i;
        while(j>0 && array[j]<array[j-1]){
            int temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;
            j--;
        }
    }
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

    std::cout<<"array elements before performing insertion sorting : "<<std::endl;
    print_array(array,array_size);
    insertion_sort(array,array_size);
    std::cout<<"array elements after performing insertion sorting : "<<std::endl;
    print_array(array,array_size);
    return 1;
}