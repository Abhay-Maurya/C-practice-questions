#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter Two numbers: ");
    scanf("%d %d",&num1,&num2);

    printf("Numbers before swapping\n");
    printf("First Number: %d , Second Number: %d\n\n",num1,num2);

    /* swapping of two numbers without third variable */
                              /*    num1= 10    num2=20     */
    num1 = num1 + num2;       /*    num1= 30    num2=20     */
    num2 = num1 - num2;       /*    num1= 30    num2=10     */
    num1 = num1 - num2;       /*    num1= 20    num2=10     */

    printf("Numbers after swapping\n");
    printf("First Number: %d , Second Number: %d",num1,num2);
}
