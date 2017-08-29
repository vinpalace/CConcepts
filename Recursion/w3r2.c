#include<stdio.h>

int recsum(int);

void main()
{
    int number,total;
    printf("\nEnter the max number\n");
    scanf("%d",&number);
    total = recsum(number);
    printf("%d",total);
}


int recsum(int number)
{
    int n,sum;
    if(number == 1)
    {
        return 1;
    }
    else
    {
        sum = number + recsum(number-1);

    }
    return sum;
}
