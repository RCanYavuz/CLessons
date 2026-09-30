#include <stdio.h>
#include <stdlib.h>
//LOOP
//While Loops
int main()
{
/*
    int count=1;
//  while statement
//  ⬇⬇⬇⬇⬇
    while(count<=10) //<-condition(True/False)
    //--------------------------------------
    {                                   // |
        printf("*");                    // |-------------|
        count = count+1;                // |  Loop body  |
                                        // |-------------|
                                        // |
                                        // |
    }                                   // |
    return0;                            // |
    //--------------------------------------
*/
/*
    int x,count=1;
    printf("Enter how many * you want: ");
    scanf("%d",&x);
    while(count<=x)
    {
        printf("*");
        count=count+1;
    }
    return 0;
*/
/*
    int pow,num; // num = 2, pow = 3 <---> num*num*num=result = 2*2*2=8
    int tempPow;
    int result=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter a power: ");
    scanf("%d",&pow);
    tempPow=pow;
    while(pow>0)
    {
        result = result *num; //result*=num;
        pow--;

    }
    printf("%d in the power of %d = %d  \n",num,tempPow,result);
    return 0;
*/
/*
    int grade;
    int totalSum=0,gradesCount=0;
    printf("Enter your grades or '-1' to stop: ");
    scanf("%d",&grade);
    while(grade!=-1)
    {
        totalSum = totalSum + grade;
        gradesCount++;
        printf("Enter your grades or '-1' to stop: ");
        scanf("%d",&grade);
    }
    printf("You've entered %d grades! \n",gradesCount);
    printf("And your Avarage Grade is %f \n",(float)totalSum/gradesCount);
    return 0;
*/
//
//              Do-While Loops
//
/*
    int price,totalPrice=0;

    do{
        printf("Please enter a price: ");
        scanf("%d",&price);
        totalPrice= totalPrice +price ;
     }while(price !=0);

    printf("Total Order Price = %d \n",totalPrice);
    return 0;
*/
/*
    int grade;
    do{
        printf("Please enter grade 0 to 100: ");
        scanf("%d",&grade);
      }while(0>grade || grade>100);

    printf("Your grade is valid.");
    return 0;
*/
//
//For Loops
//
    int num;
    int i;
    printf("Enter your number: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("%d ",i);
    }
    return 0;

















}
