#include <stdio.h>
#include <stdlib.h>
//example of if*else starter

int main()
{
/*
{   int grade;
    printf("Enter your grade: ");
    scanf("%d",&grade);
    if(grade >= 60)
        printf("Congratulation, you pass");
    else
        printf("You failed, try again");
    return 0;
*/
/*
    int num1, num2;
    printf("Enter your numbers:  \n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    if(num2 >num1)
        printf("Higher number is : %d \n",num2);
    if(num1>num2)
        printf("Higher number is : %d \n",num1);
    else
        printf("Numbers are equal.");
    return 0;
*/
/*
    int num;
    printf("Entrer your number: ");
    scanf("%d",&num);
    if(num%2==0)
        printf("Your number is even. \n");
    else
        printf("Your number is odd. \n");
    return 0;
*/
/*
    float num1,num2;
    printf("Enter your point numbers: \n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    if(num1>num2)
        printf("Max= %f, Min= %f.",num1,num2);
    else
        printf("Max= %f, Min= %f.",num2,num1);
    return 0 ;
*/
    int a,b,c;
    int max,min;
    printf("Enter your 3 numbers for scale: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a<b)
    {
        max = b;
        min = a;
    }

        if(max<c)
            max =c;
        if(min>c)
            min =c;
    printf("Your maximum number is : %d and your minimum number is: %d \n",max,min);
    printf("Your numbers in %d between %d. \n",min,max);
    return 0;
}

