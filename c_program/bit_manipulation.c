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
}

void check_bitset(){
    __uint32_t number,bit_number;
    printf("Enter the number : \n");
    scanf("%d",&number);
    printf("Enter the bit number to check (0 to 31): \n");
    scanf("%d",&bit_number);
    if(!(bit_number>=0 && bit_number<=31))    {
        printf("Invalid bit number passed...\n");
        return;
    }
    if(!(number&(1<<bit_number))){
        printf("Bit number %d is not set \n",bit_number);
        return;
    }
    printf("Bit number %d is set \n",bit_number);

}

void setbit()
{
    __uint32_t number,bit_number;
    printf("Enter the number : \n");
    scanf("%d",&number);
    printf("Enter the bit number to set (0 to 31): \n");
    scanf("%d",&bit_number);
    if(!(bit_number>=0 && bit_number<=31))    {
        printf("Invalid bit number passed...\n");
        return;
    }
    printf("Number before setting bit number %d : %d (",bit_number,number);
    print_int32_binary(number);
    printf(")\n");
    number = number | (1<<bit_number);
    printf("Number after  setting bit number %d : %d (",bit_number,number);
    print_int32_binary(number);
    printf(")\n");

}

void clearbit()
{
    __uint32_t number,bit_number;
    printf("Enter the number : \n");
    scanf("%d",&number);
    printf("Enter the bit number to clear (0 to 31): \n");
    scanf("%d",&bit_number);
    if(!(bit_number>=0 && bit_number<=31))    {
        printf("Invalid bit number passed...\n");
        return;
    }
    printf("Number before clear bit_number %d : %d (",bit_number,number);
    print_int32_binary(number);
    printf(")\n");
    number = number & ~(1<<bit_number);
    printf("Number after  clearing bit_number %d : %d (",bit_number,number);
    print_int32_binary(number);
    printf(")\n");

}

void togglebit()
{
    __uint32_t number,bit_number;
    printf("Enter the number : \n");
    scanf("%d",&number);
    printf("Enter the bit number to toggle (0 to 31): \n");
    scanf("%d",&bit_number);
    if(!(bit_number>=0 && bit_number<=31))    {
        printf("Invalid bit number passed...\n");
        return;
    }
    printf("Number before toggling bit_number %d : %d (",bit_number,number);
    print_int32_binary(number);
    printf(")\n");
    number = number ^ (1<<bit_number);
    printf("Number after  toggling bit number %d : %d (",bit_number,number);
    print_int32_binary(number);
    printf(")\n");
}

void toggle_rightmost_setbit()
{
    __uint32_t number;
    printf("Enter the number : \n");
    scanf("%d",&number);
    printf("Number before toggling rightmost setbit : %d (",number);
    print_int32_binary(number);
    printf(")\n");
    number = number & (number-1);
    printf("Number after  toggling rightmost setbit : %d (",number);
    print_int32_binary(number);
    printf(")\n");
}

void check_power_of_two()
{
    __uint32_t number;
    printf("Enter the number : \n");
    scanf("%d",&number);
    if(number &(number-1))
    {
        printf("%d is not power of 2 \n",number);
        return;
    }
    printf("%d is power of 2 \n",number);
    return;
}

void count_set_bits()
{
    __uint32_t number,temp;
    printf("Enter the number : \n");
    scanf("%d",&number);
    temp = number;
    int count = 0; 
    while(temp)
    {
        count++;
        temp = temp &(temp-1);
    }

    printf("%d has %d setbits \n",number,count);
    return;
}

int main()
{
    int number;
    int choice; 

    do{
        printf("++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("Enter Choice : \n");
        printf("1.check BitSet\n2.SetBit\n");
        printf("3.ClearBit\n4:ToggleBit\n");
        printf("5.Toggle Rightmost setbit \n6:check power of 2\n");
        printf("7.count number of setbits \n");
        printf("0:Exit\n\n");
        scanf("%d",&choice);
        printf("++++++++++++++++++++++++++++++++++++++++++++++\n");
        switch(choice)        {
            case 1 : 
                check_bitset();
                break;
            case 2 :
                setbit();
                break;
            case 3 :
                clearbit();
                break;
            case 4 :
                togglebit();
                break;
            case 5 :
                toggle_rightmost_setbit();
                break;
            case 6 :
                check_power_of_two();
                break;
            case 7 :
                count_set_bits();
                break;
            default :
                printf("Invalid Input...try again\n");
        }
    }while(choice!=0);
    return 0;
}