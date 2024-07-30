#include<iostream>
#include "../../include/array_util.h"

void reverse_array_iterative(int *array , int size)
{
    int low = 0 ,high = size-1;
    if((size < 1)||!array)
    {
        std::cout<<"empty array or invalid array size provided"<<std::endl;
        return;
    }
    while(low<high)
    {
        array[low] = array[low] + array[high];
        array[high] = array[low] - array[high];
        array[low] = array[low] - array[high];
        low++;
        high--;
    }
    return;
}

void reverse_array_recursive(int *array,int low, int high)
{
    if(low >= high)
    {
        return;
    }
    array[low] += array[high];
    array[high] = array[low] - array[high];
    array[low] -= array[high];
    return reverse_array_recursive(array,low+1,high-1);
}

int main()
{
    int *array;
    int array_size;
    std::cout<<"enter array size : "<<std::endl;
    std::cin>>array_size;
    array = new int[array_size];

    std::cout<<"Enter Array Elements:"<<std::endl;

    for(int i =0 ; i< array_size ; i++)
    {
        std::cin>>array[i];
    }

    std::cout<<"array elements before reversing"<<std::endl;
    print_array(array,array_size);

    reverse_array_iterative(array,array_size);

    std::cout<<"array elements after reversing using iterative method : "<<std::endl;
    print_array(array,array_size);

    reverse_array_recursive(array,0,array_size-1);

    std::cout<<"reverse array elements after reversing using recursive method : "<<std::endl;
    print_array(array,array_size);

    delete[] array;
    return 0;
}
