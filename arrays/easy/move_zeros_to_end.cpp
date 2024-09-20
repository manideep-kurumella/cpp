#include<iostream>
#include "../../include/array_util.h"

void move_zeros_to_end(int *array,int array_size){
    int result=0,i=0;
    while(i<array_size){
        if(array[i]){
            array[result]=array[i];
            result++;
        }
        i++;
    }
    while(result<array_size){
        array[result]=0;
        result++;
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

    std::cout<<"array elements before moving zeros to end : "<<std::endl;
    print_array(array,array_size);
    move_zeros_to_end(array,array_size);
    std::cout<<"array elements  moving zeros to end :  "<<std::endl;
    print_array(array,array_size);
    return 1;
}