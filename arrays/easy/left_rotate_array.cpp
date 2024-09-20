#include<iostream>
#include "../../include/array_util.h"

void left_rotate_array_by_one_place(int *array,int array_size){
    int temp=array[0];
    for(int i=1;i<array_size;i++){
        array[i-1]=array[i];
    }
    array[array_size-1]=temp;
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

    std::cout<<"array elements before left rotate by one place : "<<std::endl;
    print_array(array,array_size);
    left_rotate_array_by_one_place(array,array_size);
    std::cout<<"array elements after left rotate by one place  "<<std::endl;
    print_array(array,array_size);
    return 1;
}