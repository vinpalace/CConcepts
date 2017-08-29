#include<stdio.h>

int fibonacci();
int maxterms;
int flag=0;
void main()
{

    int previousnumber = 0, currentnumber = 1;
    printf("\nEnter the number of terms here\n");
    scanf("%d",&maxterms);

    printf("\n\n");
    fibonacci(previousnumber,currentnumber);

}


int fibonacci(int previousnumber,int currentnumber)
{
    int sum;
    if(flag==maxterms)
    {
        return 0;
    }
    else
    {
        sum = previousnumber+currentnumber;
        previousnumber = currentnumber;
        currentnumber = sum;
        printf("%d->",sum);

        flag++;

        fibonacci(previousnumber,currentnumber);
    }
return 0;
}
