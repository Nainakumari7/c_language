Type Decleration Instruction
#include<stdio.h>
int main(){
    int age = 22;
    int oldAge = age;
    int newAge = oldAge+2;
    int rupee = 1, dollar;
    dollar = 74;
    printf("the age is %d\n",age);
    float pie = 3.14;
    printf("the value of pie is %f\n",pie);
    char star = '*';
    printf("the star looks like %d\n",star);
    valid decleration 
    int age1,age2,age3;
    int age1 = age2 = age3 = 22;
    printf("Age1 = %d,age2 = %d,age3 = %d\n",age1,age2,age2);
    return 0;
}



Arithematic instruction
#include<stdio.h>
int main(){
    int a= 1,b=2,c=3;
    valid
    a=b+c;
    printf("%d\n",a);
    invalid 
    a+b=c;
    printf("%d\n",3%2);
    printf("%d\n",-3%2);
    return 0;
}


type conversion
#include<stdio.h>
int main(){
    int a,b;
    a=2;
    b=3;
    printf("print the sum:-%d\n",a+b);
    return 0;
}

#include<stdio.h>
int main(){
    float a,b;
    a=2.0;
    b=3;
    printf("print the sum :- %f\n",a+b);
    return 0;
}

#include<stdio.h>
int main(){
    float a,b;
    a=2.0;
    b=3.0;
    printf("print the sum :- %f\n",a+b);
    return 0;
}


Associativity
#include<stdio.h>
int main(){
    int a;
    a=5+2/2+3;
    printf("output %d  ",a);
    return 0;
}
#include<stdio.h>
int main(){
    printf("output %d \n",5*2-2*3);
    printf("output %d \n",5*2/2*3);
    printf("output %d \n",5*(2/2)*3);
    printf("output %d \n",5+2/2*3);
    return 0;
}

Operators in c
#include <stdio.h>
int main(){
    printf("%d\n",4 == 4);
    printf("%d\n",3 > 4);
    printf("%d\n",4 > 3);
    printf("%d\n",4 >= 3);
    printf("%d\n",4 <= 3);
    printf("%d\n",4 != 4);
    printf("%d\n",3 != 4);
    return 0;

}

Logical operator
#include<stdio.h>
int main(){
    printf("%d\n",5>2&&4>2);
    printf("%d\n",1>2&&4>2);
    return 0;
}

#include<stdio.h>
int main(){
    printf("%d\n",5>2||4>2);
    printf("%d\n",1>2||4>2);
    return 0;
}

#include<stdio.h>
int main(){
    printf("%d\n",!(3>4));
    return 0;
}

#include<stdio.h>
int main(){
    int a = 10;
    int b = 5;
    // a += b;
    // a -= b;
    // a*=b;
    a/=b;
    printf("%d\n",a);
    return 0;
}

questions
#include<stdio.h>
int main(){
    int num;
    printf("Enter your desired number:-");
    scanf("%d",&num);
    printf("%d",num%2==0);
    return 0;
}

#include<stdio.h>
int main(){
    int isSunday = 0;
    int isSnowing = 0;

    printf("%d\n",isSunday && isSnowing);
    return 0;
}

#include<stdio.h>
int main(){
    int isMonday = 0;
    int isRaining = 1;
    printf("%d\n",isMonday || isRaining);
    return 0;
}

#include<stdio.h>
int main(){
    int x;
    printf("Enter the number:-");
    scanf("%d",&x);
    printf("%d\n",(x>9)&&(x<100));
    return 0;
}
