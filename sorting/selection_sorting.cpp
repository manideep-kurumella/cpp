#include<iostream>
#include "../include/array_util.h"

/*
1.select minimum index of the array and swap with current array's initial index content. 
*/

void selection_sort(int *array , int size)
{
    for(int i=0;i<size;i++){
        int min_index=i;

        //this loop will find the minmum index
        for(int j=i+1;j<size;j++){
            if(array[j]<array[min_index])
                min_index = j;
        }
        //swap this with the current initial index of the sub-array . 
        int temp = array[i];
        array[i]=array[min_index];
        array[min_index]=temp;
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

    std::cout<<"array elements before performing selection sorting : "<<std::endl;
    print_array(array,array_size);
    selection_sort(array,array_size);
    std::cout<<"array elements after performing selection sorting : "<<std::endl;
    print_array(array,array_size);
    return 1;
}