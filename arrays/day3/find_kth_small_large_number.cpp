/*Given an array arr[] of size N and a number K, where K is smaller than the size of the array. 
Find the K’th smallest element in the given array. Given that all array elements are distinct.*/

#include <iostream>
#include "../../include/array_util.h"

int find_kth_max(int *array,int array_size,int kth_max)
{
    int low = 0 ; 
    
}

int main()
{
    int *array;
    int array_size=0;

    std::cout<<"Enter Array size : ";
    std::cin>>array_size;

    array = new int[array_size];

    std::cout<<"Enter the array elements : ";
    for(int i = 0; i < array_size; i++)
        std::cin>>array[i];
    
    int kth_max,kth_min;

    std::cout<<"Enter the Kth max to find : ";
    std::cin>>kth_max;

    std::cout<<"Enter the Kth min to find : ";
    std::cin>>kth_min;

    std::cout <<"kth max in the array : "<<find_kth_max(array,array_size,kth_max)<<std::endl;
}