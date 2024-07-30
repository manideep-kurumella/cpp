/*
Binary representation of a given number
https://www.geeksforgeeks.org/binary-representation-of-a-given-number/?ref=lbp
*/
#include <bits/stdc++.h>
#include<iostream>

/*
1. check number>0
2. right shift number by 1 bit and do a recursive function call 
3. Print the last bit of the number 
*/
void print_binary_shift_recursive(unsigned int number)
{
    if(number > 0)
        print_binary_shift_recursive(number >> 1 );
    //print the last bit after the recursive call
    std::cout<<(number & 1);
    return;
}

/*
using c+= bitset class. 
Link : https://www.geeksforgeeks.org/cpp-bitset-and-its-application/ 
Initialization : bitset<size> variable_name(initialization);
*/
void print_binary_bitset_class(unsigned int number)
{
    std::bitset<8> bitset_number(number);
    std::cout << bitset_number;
    std::cout<<"number of set bits : "<<bitset_number.count();
    return;
}


int main()
{
    int num;
    std::cout << "Enter the number : ";
    std::cin>>num;
    std::cout<<"Binary Representation of number "<<num<<" using shift and recursive method is : ";
    print_binary_shift_recursive(num);
    std::cout<<std::endl;
    std::cout<<"Binary Representation of number "<<num<<" using Bitset class of c++ is : ";
    print_binary_bitset_class(num);
    std::cout<<std::endl;
    return 0;
}