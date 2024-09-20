#include<iostream>
#include "../../include/array_util.h"

int find_largest_in_array(int *array,int array_size){
    int big = array[0];
    for(int i=1;i<array_size;i++){
        if(array[i]>big) big=array[i];
    }
    return big;
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
    int big = find_largest_in_array(array,array_size);
    std::cout<<"largest number in the array =  "<<big<<std::endl;
    return 1;
}