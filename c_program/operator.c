#include<stdio.h>

int main()
{
    int i =0 ;

    printf("1st increment : %d \n",i++);
    printf("2nd increment : %d \n",++i);

    if(i++ == 2){
        printf("3rd increment : %d\n ", i);
    }
    if(++i == 3){
        printf("4th increment : %d\n", i);
    }
    else{
        printf("4th incrment in else : %d \n",i);
    }

}