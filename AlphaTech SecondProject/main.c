#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    int num;
    scanf("%d", &num);
    printf("num is %d \n", num);
    return 0;
    */
    /*
    calculate born year (int)
    int currentyear;
    int age;
    scanf("%d", &currentyear);
    scanf("%d", &age);
    printf("Year you were born: %d \n",currentyear - age);
    return 0;
    */
    //rectangle area (double)
    /*
    int rectangleHeight;
    int rectangleWidht;
    scanf("%d", &rectangleHeight);
    scanf("%d", &rectangleWidht),
    printf("Rectangle Area is = %d \n", rectangleHeight*rectangleWidht);
    return 0;
    */
    /*
    double height, widht;
    double area;
    printf("Enter height: ");
    scanf("%lf", &height); //&lf using for double integers
    printf("Enter widht: ");
    scanf("%lf",&widht);
    area= height*widht;
    printf("The area of this rectangle = %lf",area);
    return 0;
    */
    //Casting :
    // int num1=5,num2=2; if both stay like int it solution cannot be double at least one of them has to change be double
    /*
    int num1=5;
    double num2=2.0;
    double result; //int result;
    result = num1/num2; //or we can change lik result= num1/(double)num2; it will be the same as last one
    printf("The result is= %lf\n ", result);
    return 0;
    */
    /* Grade Avarage
    int grade1;
    int grade2;
    int grade3;
    double gradeAvarage;
    printf("Enter first grade: ");
    scanf("%d", &grade1);
    printf("Enter second grade: ");
    scanf("%d", &grade2);
    printf("Enter third grade: ");
    scanf("%d", &grade3);
    gradeAvarage = ((double)grade1+grade2+grade3)/3;
    printf("Avarage Grade is: %.2lf \n", gradeAvarage); // %.2lf use for delete 0 in double
    return 0;
    */
    double CelsiusDegrees;
    double FahrenheitDegrees;
    printf("Enter Celsius Degrees: ");
    scanf("%lf",&CelsiusDegrees);
    FahrenheitDegrees= CelsiusDegrees*1.8+32;
    printf("Fahrenheit Degree is : %.2lf", FahrenheitDegrees);
    return 0;
}
