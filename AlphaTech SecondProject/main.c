#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    /*
    double CelsiusDegrees;
    double FahrenheitDegrees;
    printf("Enter Celsius Degrees: ");
    scanf("%lf",&CelsiusDegrees);
    FahrenheitDegrees= CelsiusDegrees*1.8+32;
    printf("Fahrenheit Degree is : %.2lf", FahrenheitDegrees);
    return 0;
    */
    /* Swap Challange
    double a = 7.8;
    double b = 8.7;
    double temp;
    printf("a= %.2lf \n", a);
    printf("b= %.2lf \n", b);
    temp=a;
    a=b;
    b=temp;
    printf("a= %.2lf \n", a);
    printf("b= %.2lf \n", b);
    return 0;
    */
    // Arithmetic Sequence:

/*  Benim yaptýðým
    int a1= 1;
    int a2= 3;
    int d;
    d = a2 - a1;
    int n;
    printf("Please enter n :");
    scanf("%d",&n);
    int an;
    an= a1 + (n-1)*d;
    printf("an = %d", an);
    return 0;
*/

    //Eðitimde olan farklar:
    //float kullandýk, double farký byte sayýsý ayrýca float daha virgülden sonra daha kýsa alýr
    // hepsini kullanýcýya verdirdik
    /*
    float a1,d;
    int n;
    printf("Enter the Initial Term: ");
    scanf("%f", &a1);
    printf("Enter the difference in the Arithmetic Sequence: ");
    scanf("%f",&d);
    printf("Enter the number of elements in the Arithmetic Sequence: ");
    scanf("%d", &n);
    printf("The n-th term of the Arithmetic Sequence = %f \n", a1+(n-1)*d);
    return 0;
    */
    /*
    float a1, an,Sn;
    int n;
    printf("Enter a1= ");
    scanf("%f",&a1);
    printf("Enter n= ");
    scanf("%d",&n);
    printf("Enter an= ");
    scanf("%f",&an);
    Sn=(a1+an)*n/2;
    printf("Sum of the sequence is: %f  \n",Sn);
    return 0;
    */
    /*
    float Salary, Totalhoursworked, Balance;
    printf("Enter Salary (per hours): ");
    scanf("%f",&Salary);
    printf("Enter Total hours worked:  ");
    scanf("%f",&Totalhoursworked);
    Balance= Salary*Totalhoursworked;
    printf("Your Balance will be: %f \n",Balance);
    */
    //x=v.i
    /*
    float x,v,i;
    printf("Enter distance A to B(km): ");
    scanf("%f",&x);
    printf("Enter your speed(km/h): ");
    scanf("%f",&v);
    i=x/v;
    printf("Initialize is(h) : %f \n",i);
    return 0;
    */
    /*
    int hours,minutes,seconds;
    int givenseconds;
    printf("Enter total seconds: ");
    scanf("%d",&givenseconds);
    hours = givenseconds/3600;
    minutes =((givenseconds- hours * 3600 )/60);
    seconds = (givenseconds - hours * 3600)%60;
    printf("Total hours: %d \n",hours);
    printf("Total minutes: %d \n",minutes);
    printf("Total seconds: %d \n",seconds);
    printf("Total: %d : %d : %d \n",hours,minutes,seconds);
    return 0;
    */
    /*
    float data,decimalpart;
    printf("Enter your data: ");
    scanf("%f",&data);
    decimalpart= data - (int)data;
    printf("After floating point: %d \n", (int)data);
    printf("Decimal part is : %f", decimalpart);
    return 0 ;
    */
    /* Ben bir malým hatayý bulana kadar çatladým integer ifadeye %f kullanmýþým
    int num;
    int hundreds,tens,units;
    printf("Enter a 3-digit number: ");
    scanf("%d",&num);
    hundreds = num / 100;
    printf("hundreds %d \n",hundreds);
    tens = (num / 10 ) % 10;
    printf("tens %d \n",tens);
    units = num % 10;
    printf("units %d \n",units);
    printf("The total sum of digits in %d is %d \n",num, units+tens+hundreds);
    */
    /*
    int num, reversedNum;
    int hundreds,tens,units;
    printf("Enter a 3-digit number: ");
    scanf("%d",&num);
    hundreds = num / 100;
    tens = (num / 10 ) % 10;
    units = num % 10;
    reversedNum = units;
    reversedNum = reversedNum *10 + tens;
    reversedNum = reversedNum *10 + hundreds;
    printf("The reversed number in %d is %d \n",num,reversedNum);
    printf("The reversed number in %d is %d%d%d \n",num,units,tens,hundreds);
    return 0;
    */
    /*
    float x1,y1,x2,y2,distance; // karakökü almak için sqrt kullanýyoruz ayrýca pow da üssü almak için ,den sonra üs derecesini belirtir
    printf("Enter your first x-coordinat: ");
    scanf("%f",&x1);
    printf("Enter your first y-coordinat: ") ;
    scanf("%f",&y1);
    printf("Enter your second x-coordinat: ");
    scanf("%f",&x2);
    printf("Enter your second y-coordinat: ");
    scanf("%f",&y2);
    distance = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("Distance between (%.2f,%.2f) and (%.2f,%.2f) coordinat is : %.2f \n",x1,y1,x2,y2,distance);
    return 0;
    */
    int x,x2,x4,x6,x8;
    printf("Enter your integer : ");
    scanf("%d",&x);
    x2 = pow(x,2);
    x4 = pow(x,4);
    x6 = pow(x,6);
    x8 = pow(x,8);
    printf("x^2: %d \n",x2);
    printf("x^4: %d \n",x4);
    printf("x^6: %d \n",x6);
    printf("x^8: %d \n",x8);
    return 0;
}
