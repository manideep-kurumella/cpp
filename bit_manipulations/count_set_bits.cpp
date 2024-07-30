/*
Count set bits in an integer
https://www.geeksforgeeks.org/count-set-bits-in-an-integer/?ref=lbp 

*/
#include <bits/stdc++.h>
#include<iostream>

/*
Brian Kernighan’s Algorithm:
1.Initialize count: = 0
2.If integer n is not zero
    (a) Do bitwise & with (n-1) and assign the value back to n
        n: = n&(n-1)
    (b) Increment count by 1
    (c) go to step 2
3.Else return count

This loop runs for only set number of bits. 
Reason : num -1  will toggle all bits after rightmost set bit including rightmost set bit .
So , num & num-1 in a loop will make right most of a number 0 for every iteration. 

order = O(log n)
*/

int get_setbit_brian_kernighan_method(unsigned int number)
{
    unsigned int count = 0;
    unsigned int temp = number;

    while(temp>0)
    {
        temp &= (temp-1) ;
        count ++;
    }
    return count;

}

int get_set_bit_count_bitset(unsigned int number)
{
   std::bitset<8> bitset_number(number);
   return bitset_number.count();
}

int main()
{
    int num;
    std::cout<<"Enter the number to count the set bits : ";
    std::cin>>num;
    std::cout<<"number of set bits in "<<num<<"calculated using Brian Kernighan method is : "<<get_setbit_brian_kernighan_method(num)<<std::endl;
    std::cout<<"number of set bits in "<<num<<" calculated using bitset.count() inbuilt c++  method is : "<<get_set_bit_count_bitset(num)<<std::endl;
    return 0;
}