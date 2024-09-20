#include<stdio.h>

int main()
{
    __uint32_t number ,temp;
    char binary[33]={'\0'};
    printf("Enter the number : ");
    scanf("%d",&number);
    temp=number;

    for (int i=31;i>=0;i--)
    {
        binary[i] = '0'+(temp&1);
        temp >>= 1;
        printf("temp = %d,binary = %c\n",temp,binary[i]);
    }
    printf("Binary of %d is : %s \n",number,binary);
    return 0;
}