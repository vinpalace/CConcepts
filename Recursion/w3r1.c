#include<stdio.h>

void print();

void main()
{
    int n = 1;
    print(n);

}

void print(int n)
{

    if(n<=50)
    {
        printf("%d->",n);
        print(n+1);
    }
}
