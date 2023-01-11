#include<stdio.h>
int main()
{
    int num,i,count=0,temp;
    /* taaking user input */
    printf("Enter a number: ");
    scanf("%d",&num);
    temp = num;
    /* while loop to count number of 1's in an integer */
    while(num>0)
    {
        if(num&1!=0)
            count++;
        num=num/2;
    }
    printf("\nNumber of 1s in %d: %d",temp,count);

    return 0;
}
