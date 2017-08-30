#include<stdio.h>

int count;
int counter(int number);

void main()
{
    int number;
    printf("\nEnter a number\n");
    scanf("%d",&number);

    counter(number);


    printf("\nTotal number of digits is %d\n",count);


}


int counter(int number)
{

    if(number!=0)
    {
        count++;
        counter(number/10);
    }



    return 0;
}
