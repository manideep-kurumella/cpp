#include<iostream>
#include "../include/array_util.h"

/*
1.compare consecutive elements swap if left > right 
2.after one iteration , we will get maximum in th array at the right most 
3. if size of array = N , repeat it for N-1 times . 
*/


void bubble_sort(int *array,int array_size){

    for(int i=0;i<array_size-1;i++){
        for (int j=0;j<array_size-i-1;j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
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

    std::cout<<"array elements before performing bubble sorting : "<<std::endl;
    print_array(array,array_size);
    bubble_sort(array,array_size);
    std::cout<<"array elements after performing bubble sorting : "<<std::endl;
    print_array(array,array_size);
    return 1;
}