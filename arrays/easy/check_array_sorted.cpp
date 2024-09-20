#include<iostream>
#include <limits.h>
#include "../../include/array_util.h"

int check_sorted_array(int *array,int array_size){
    for(int i=0;i<array_size-1;i++){
        if(array[i]>array[i+1]) return false;        
    }
    return true;
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

    std::cout<<"array elements : "<<std::endl;
    print_array(array,array_size);
    if(check_sorted_array(array,array_size)){
        std::cout<<"array is sorted"<<std::endl;
    }
    else{
        std::cout<<"array is not sorted"<<std::endl;

    }
    return 1;
}