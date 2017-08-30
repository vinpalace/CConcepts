#include<stdio.h>

int sum(int x);
void main()

{

    int number;
    int total;
    printf("\nEnter a number\n");
    scanf("%d",&number);

    total = sum(number);

    printf("\nThe total is %d",total);


}


int sum(int number)
{
    if(number==0)
    {
        return 0;
    }

    return number % 10 + sum(number/10);

}
