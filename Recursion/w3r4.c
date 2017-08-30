#include<stdio.h>

int print(int array[] , int start , int last);

void main()
{

    int array[5] = {0,1,2,3,4};

    print(array,0,5);

}


int print(int array[],int start, int last)
{
    if(start==last)
    {
        return -1;
    }


    printf("%d->",array[start]);

    print(array,start+1,last);
    return 0;
}
