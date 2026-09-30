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
/*
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
*/
/*    //Logical Operators
    //ýf we got 90 or higher
    //and
    //ýf we have less than 50 bucks
    int grade,money;
    printf("Enter your grade and your money: ");
    scanf("%d, %d",&grade,&money);
    //AND
    if(grade>=90 && money <50 )
    //OR
    if(money <50 || grade >90)

    if(!(grade > 80)),
        printf("Good job! \n "); //grade =< 80
    return 0;
*/
//Basic Calculater:
/*
  int num1,num2;
  char mathOperation;

  printf("Select your math operator(like '-','+',...): \n");
  scanf("%c",&mathOperation);
  printf("Enter your num1:  \n");
  scanf("%d",&num1);
  printf("Enter your num2:  \n");
  scanf("%d",&num2);


  switch(mathOperation)
  {
    case '+':
        printf("%d %c %d = %d",num1,mathOperation,num2,num1+num2);
        break;
    case '-':
        printf("%d %c %d = %d",num1,mathOperation,num2,num1-num2);
        break;
    case '*':
        printf("%d %c %d = %d",num1,mathOperation,num2,num1*num2);
        break;
    case '/':
        if (num2==0)
            printf("Syntax Error");
        else
            printf("%d %c %d = %d",num1,mathOperation,num2,num1/num2);
        break;
    default:
        printf("Wrong mathematical operation... Try again. \n");
  }
  return 0;
*/
/*
//Write a program that reads from the user 2 values of an "integer" type.
//The program should print "EQUAL" if both the values are equal.
//Otherwise, the program should print "NOT EQUAL".
    int num1,num2;
    printf("Enter num1: \n");
    scanf("%d",&num1);
    printf("Enter num2: \n");
    scanf("%d",&num2);
    if(num1==num2)
        printf("EQUAL \n");
    else
        printf("NOT EQUALL \n");

//Write a program that reads from the user 3 values of an "integer" type.
//The program should print "EQUAL" if all the values are equal.
//Otherwise, the program should print "NOT EQUAL".
//Note: There's more than just 1 "correct" solution for this question.

    int num3,num4,num5;
    printf("Enter num1:  \n");
    scanf("%d",&num3),
    printf("Enter num2:  \n");
    scanf("%d",&num4);
    printf("Enter num3:  \n");
    scanf("%d",&num5);
    if(num3==num4 && num4==num5)
        printf("EQUAL \n");
    else
        printf("NOT EQUAL \n");

//Write a program that reads from the user a "three-digit" integer value.
//The program should print "ASCENDING" if the three digits of the number are in ascending order (from left to right).
//If not, the program should print "NOT ASCENDING".
//For example:
//* Input: 137 --> ASCENDING (1<3<7)
//* Input: 143 --> NOT ASCENDING.

    int num6,num7,num8;
    printf("Enter first number for three-digit integer value: \n");
    scanf("%d",&num6);
    printf("Enter second number for three-digit integer value: \n");
    scanf("%d",&num7);
    printf("Enter third number for three-digit integer value: \n");
    scanf("%d",&num8);
    printf("Your three digit integer is : %d%d%d \n",num6,num7,num8);
    if(num6<num7 && num7<num8)
        printf("This three digit integer is ASCENDING \n");
    else
        printf("This three digit integer is NOT ASCENDING \n");




//Write a program that reads an input number from the user.
//The program should print "1" if the value is positive, "-1" if it's negative, and "0" if it equals to zero.

    int num9;
    printf("Enter your number: ");
    scanf("%d",&num9);
    if(num9 < 0)
        printf("-1");
    if(num9>0)
        printf("1");
    else
        printf("0");
*/
/*
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    if(num1==num2)
        printf("True");
    else
        printf("False");
*/
/*
    int num1;
    printf("Enter num1: ");
    scanf("%d",&num1);
    if (num1 >= 10 && num1 <= 99)
        printf("double-digit \n");
    else if (num1 >= 100 && num1 <= 999)
        printf("triple-digit\ n");
    else
        printf("neither double or triple digit\n");
    return 0;
*/

/*
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n<0){
        printf("|%d|",n);
        n=-n;
        printf("=%d",n);
    }
    else
        printf("&d",n);
*/
/*
    int x,y;
    printf("Enter your coordinate: ");
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>0 && y>0)
        printf("Quardant 1");

    else if(x<0 && y>0)
        printf("Quardant 2");

    else if(x<0 && y<0)
        printf("Quardant 3");

    else if(x>0 && y<0)
        printf("Quardant 4");

    else
        printf("Coordinat is located at the center");
*/
/*
    int n;
    printf("Enter number for month(1-12): ");
    scanf("%d",&n);
    if(n==1)
        printf("January \n");
    else if(n==2)
        printf("February \n");
    else if(n==3)
        printf("March \n");
    else if(n==4)
        printf("April");
    else if(n==5)
        printf("May");
    else if(n==6)
        printf("June");
    else if(n==7)
        printf("July");
    else if(n==8)
        printf("August");
    else if(n==9)
        printf("September");
    else if(n==10)
        printf("October");
    else if(n==11)
        printf("November");
    else if(n==12)
        printf("December");
    else
        printf("Wrong Number, Try Again!");

    return 0;
*/
/*
    int givenseconds,hours,minutes,seconds;
    printf("Enter second: ");
    scanf("%d",&givenseconds);
    hours=givenseconds/3600;
    minutes=(givenseconds-(3600*hours))/60;
    seconds=(givenseconds-(3600*hours)) %60;
    if(hours<10 && minutes<10)
        printf("Your time is: 0%d:0%d:%d",hours,minutes,seconds);
    else if(hours<10 && minutes>=10)
        printf("Your time is: 0%d:%d:%d",hours,minutes,seconds);
    else if(hours>=10 && minutes<10)
        printf("Your time is: %d:0%d:%d",hours,minutes,seconds);
    else if(hours>=10 && minutes>=10)
        printf("Your time is: %d:%d:%d",hours,minutes,seconds);

*/
/*
    int a,b,c;
    printf("Enter your digits: ");
    scanf("%d,",&c);
    scanf("%d",&b);
    scanf("%d",&a);
    if(a % b == 0 || b % a == 0)
        printf("Divisible");
    else if(a % c == 0 || c % a == 0)
        printf("Divisible");
    else if(b % c == 0 || c % b == 0)
        printf("Divisible");
    else
        printf("Non-Divisble");
    return 0 ;
*/
/*
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if(year % 4 == 0 && year % 100 != 0)
        printf("This year is Leap Year");
    else if(year % 400 == 0)
        printf("This year is Leap Year");
    else
        printf("This year is Not Leap Year");
    return 0;
*/










}

