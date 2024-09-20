#include<iostream>
#include "../../include/array_util.h"

int linear_search(int *array,int array_size,int key){
    int i=0;
    while(i<array_size){
        if(array[i] == key) return i;
        i++;
    }
    return -1;
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
    std::cout<<"Enter value of key to find in the array: "<<std::endl;
    int key=0;
    std::cin>>key;

    std::cout<<"array : "<<std::endl;
    print_array(array,array_size);
    int index = linear_search(array,array_size,key);
    if(index ==-1){
        std::cout<<"key: "<<key<<" not found in the array"<<std::endl;
    }
    std::cout<<"key: "<<key<<" value found in the array at index : "<<index<<std::endl;
    return 1;
}