#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:-");
    scanf("%d",&age);
    if(age>18){
        printf("you are an adult \n");
        printf("you can drive\n");
        printf("you can vote\n");
    }else{
        printf("you are not adult");

    }
    return 0;
}

#include<stdio.h>
int main(){
    int age;
    printf("enter you age:-");
    scanf("%d",&age);
    if(age>=18){
        printf("you are an adult");
    }else if(age>13 && age<18){
        printf("you are an teenager");
    }else{
        printf("you are a child");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int age;
    printf("enter yor age :- ");
    scanf("%d",age);
    age>= 18 ? printf("you are an adult\n"):printf("you are not an adult\n");
    return 0;

}


#include<stdio.h>
int main(){
    int day;
    printf("enter day :- ");
    scanf("%d",&day);
    switch(day){
        case 1 : printf("MONDAY\n");
        break;
        case 2 : printf("TUES/n");
        break;
        case 3 : printf("WED\n");
        break;
        case 4:  printf("THUS\n");
        break;
        case 5 : printf("FRI\n");
        break;
        case 6 : printf("SAT\n");
        break;
        case 7 : printf("SUN\n");
        break; 
        default : printf("not a valid day\n");

    }
    return 0;

}

#include<stdio.h>
int main(){
    int marks;
    printf("enter your obtained marks :- ");
    scanf("%d",&marks);
    if(marks>=30){
        printf("you are pass ");
    }
    else{
        printf("you are fail");
    }
    return 0;

}

#include<stdio.h>
int main(){
    int marks;
    printf("enter your obtained marks :- ");
    scanf("%d",&marks);

    if(marks < 30){
        printf("C\n");
    }
    else if(marks >=30 && marks < 70){
        printf("B\n");
    }
    else if(marks >= 70 && marks <90){
        printf("A\n");
    }
    else{
        printf("A+\n");
    }
    return 0;

}

#include<stdio.h>
int main(){
    char ch;
    printf("enter the charecter :- ");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("UPPER CASE");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("LOWER CASE");

    }
    else{
        printf("no english letter");
    }
    return 0;
}


#include<stdio.h>
int main(){
    int nat;
    printf("Enter the desired num :-");
    scanf("%d",&nat);
    if(nat >= 1 && nat <= 10000){
        printf("this is a natural num");
    }else{
        printf("this is not a natural number");
    }
    return 0;

}
