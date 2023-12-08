#include<iostream>
#include "../include/array_util.h"

void print_array(int *array, int size)
{
    if ((size < 1) || !array)
    {
        std::cout<<"empty array or invalid array size provided"<<std::endl;
        return;
    }
    for(int i = 0; i < size ; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout<<std::endl;
}