//valuables and data type 

#include<stdio.h>

int main()
{
     // declare and intialize valuables
     char grade ='A'; //%c
     char name[13]=("prudence maina"); //%s
     int age =17; //%d
     float marks = 80; //%f
     double pi=3.142; //%if
     
    printf("my grade is %c \n",grade );
    printf("my name is %s \n",name );
    printf("I am %d years old \n",age );
    printf("I scrored %•2f marks in KCSE\n", marks);
    printf("the value of pi is %•31f\n",pi);
    
    
    return 0;
}