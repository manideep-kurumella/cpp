#include<iostream>
#include "../../include/array_util.h"

/*
For Rotating Elements to right : 

Step 1: Reverse the last k elements of the array
Step 2: Reverse the first n-k elements of the array.
Step 3: Reverse the whole array.
*/

/*
For Rotating Elements to left : 
Step 1: Reverse the first k elements of the array
Step 2: Reverse the last n-k elements of the array.
Step 3: Reverse the whole array.
*/

void reverse(int *array,int left,int right){
    while(left<right){
        int temp=array[left];
        array[left]=array[right];
        array[right]=temp;
        left++;
        right--;
    }
    
}

void left_rotate_array_by_d_place(int *array,int array_size,int d){
    reverse(array,0,d-1);
    reverse(array,d,array_size-1);
    reverse(array,0,array_size-1);

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
    std::cout<<"Enter value of D for number of rotations : "<<std::endl;
    int d=0;
    std::cin>>d;


    std::cout<<"array elements before left rotate by "<<d<<" places : "<<std::endl;
    print_array(array,array_size);
    left_rotate_array_by_d_place(array,array_size,d);
    std::cout<<"array elements after left rotate by "<<d<<" places : "<<std::endl;
    print_array(array,array_size);
    return 1;
}