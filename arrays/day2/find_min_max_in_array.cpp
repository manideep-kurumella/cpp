#include<iostream>
#include "../../include/array_util.h"

void find_min_max(int *array, int array_size, int &min, int &max) 
{
    // Check for valid array size
    if (array_size <= 0) 
    {
        std::cout << "Array is empty or has invalid size." << std::endl;
        return;
    }

    // Initialize min and max with the first element of the array
    min = max = array[0];

    // Iterate through the array to find min and max
    for (int i = 1; i < array_size; ++i) {
        if (array[i] < min) {
            min = array[i];
        } else if (array[i] > max) {
            max = array[i];
        }
    }
}

int main()
{
    int *array;
    int array_size;

    std::cout << "Enter the array size : ";
    std::cin >> array_size;

    array = new int[array_size];

    
    for(int i=0 ; i<array_size ; i++)
    {
        std::cin>>array[i];
    }
    int min = 0 ,max = 0 ;

    find_min_max(array,array_size,min,max);

    std::cout<<"Maximum of the array = "<< max << std::endl;
    std::cout<<"Minimum of the array = "<< min << std::endl;

}
