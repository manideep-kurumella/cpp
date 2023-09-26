/*
FInd GCD of two numbers . 
1. Finding GCD in naive method . 
2. Finding GCD using Euclidean algorithm in iterative method .
3. Finding GCD using Euclidean algorithm in recursive fashion.
*/
#include<iostream>

/*
    naive method: 
    1. Find min(number1,number1)
    2.min(number1,number2)
    3.run loop staring min(number1,number2) till 1 
        i.if both num1 and num2 are divisible by result return result
        ii.else decrement result and go to loop start.  
*/
int gcd_two_numbers_naive(int number1 , int number2)
{
    int result = ((number1<number2)?number1:number2);

    while (result > 1 )
    {
        if((number1%result) == 0 && (number2%result) == 0)
            break;
        result--;
    }
    return result;

}

int gcd_two_numbers_euclidean_iterarive(int number1, int number2)
{
    while(number1 > 0 && number2 > 0)
    {
        if(number1 > number2)
        {
            number1 = number1%number2;
        }
        else
        {
            number2 = number2%number1;
        }
    }
    if(number1 == 0)
        return number2;
    return number1;
}

int gcd_two_numbers_euclidean_recursive(int number1, int number2)
{
	return number2 == 0 ? number1 : gcd_two_numbers_euclidean_recursive(number2, number1 % number2);
}

int main()
{
    int number1 = 0 , number2 = 0 , gcd = 0;

    std::cout<<"enter number1 : "<<std::endl;
    std::cin>>number1;
    std::cout<<"enter number2 : "<<std::endl;
    std::cin>>number2;

    gcd = gcd_two_numbers_euclidean_iterarive(number1,number2);

    std::cout<<"GCD of "<<number1<<" and "<<number2<<" = "<<gcd<<std::endl;

    return 0;
}