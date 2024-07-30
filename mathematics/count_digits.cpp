//Program to count digits in an integer

#include<iostream>

int get_digit_count(int num)
{
    int count = 0 ; 
    while(num%10)
    {
        count++;
        num = num/10;
    }
    return count;
}

int main()
{
    int number,count=0;

    std::cout<<"Enter the number : ";
    std::cin>>number;
    count = get_digit_count(number);
    std::cout<<"Number of digits in number : "<<number<<" are : "<<count<<std::endl;
}