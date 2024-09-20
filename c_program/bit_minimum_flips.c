#include<stdio.h>

void print_int32_binary(__uint32_t number) {
    int bit;
    for (bit = 31; bit >= 0; bit--) {
        // Check if the bit at 'bit' position is 1
        if (number & (1 << bit)) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}

int main()
{
    int number1,number2;
    int minflips=0;

    printf("Enter number1 : ");
    scanf("%d",&number1);
    printf("Enter number2 : ");
    scanf("%d",&number2);

    printf("number1 in Binary format : ");
    print_int32_binary(number1);
    printf("number2 in Binary format : ");
    print_int32_binary(number2);

    int temp = number1^number2;
    while(temp){
        minflips++;
        temp=temp&(temp-1);
    }

    printf("minimum flips to change number1:%d into number2:%d : %d\n",number1,number2,minflips);
    return 0;
}