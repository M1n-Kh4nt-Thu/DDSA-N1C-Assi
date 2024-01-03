
#include<stdio.h>
float diviFunction(int f_number, int s_number);
int multiFunction(int f_number, int s_number);
int subFunction(int f_number, int s_number);
int addFunction(int f_number, int s_number);

int main(){

int di_a = 0;
int di_b= 0;

int mul_a= 0;
int mul_b= 0;

int sub_a=0;
int sub_b=0;

int add_a=0;
int add_b=0;

float divi = diviFunction( di_a, di_b);
int multi = multiFunction ( mul_a, mul_b);
int sub = subFunction (sub_a, sub_b);
int add = addFunction(add_a, add_b);
printf("===================week2 day 1 assigement=================\n");

printf("Here's My equation for these Assigement\n(? / ?) = ? \n (? * ?) = ? \n (? - ?) = ? \n (? + ?) = ? \n");

//divicion user input
printf("Input your first division number:");
scanf("%d", &di_a);
printf("Inpur Your Second Division number:");
scanf("%d", &di_b);
printf("the result of division = %.2f\n", divi);


//multi user input
printf("Input your first multi number:");
scanf("%d", &mul_a);
printf("Inpur Your Second Division number:");
scanf("%d", &mul_b);
printf("the result of multiplication = %d\n", multi);


//sub user input
printf("Input your first sub number:");
scanf("%d", &sub_a);
printf("Inpur Your Second sub number:");
scanf("%d", &sub_b);
printf("the result of subtraction = %d\n", sub);


//final addition 
printf("Input your first add number:");
scanf("%d", &add_a);
printf("Inpur Your Second add number:");
scanf("%d", &add_b);
printf("the result of subtraction = %d\n", sub);

    return 0;
}

//division

float diviFunction(int f_number, int s_number){


 return (float)f_number/s_number;
}
   

//multiplication
int multiFunction(int f_number , int s_number){


    return f_number * s_number;
}

//subtraction

int subFunction(int f_number, int s_number){


    return f_number - s_number;
}

//addition
int addFunction(int f_number, int s_number){

    

    return f_number + s_number;
}
