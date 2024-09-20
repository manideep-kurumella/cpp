#include<iostream>
#include "../../include/array_util.h"

void remove_duplicates_from_sorted_array(int *array,int array_size){
    int i=1,j=0;
    while(i<array_size){
        if(array[i]!=array[j]){
            j++;
            array[j]=array[i];
        }
        i++;
    }
    while(j<array_size){
        array[++j] = 0;
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

    std::cout<<"array elements before removing duplicates : "<<std::endl;
    print_array(array,array_size);
    remove_duplicates_from_sorted_array(array,array_size);
    std::cout<<"array elements after removing duplicates : "<<std::endl;
    print_array(array,array_size);
    return 1;
}