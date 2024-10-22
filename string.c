#include<stdio.h>
int main(){
    // char name[]={'N','A','I','N','A','\0'};
    char name[]="NAINA";
    printf("%c",name);
    return 0;
}


#include<stdio.h>
void printName(char arr[]);
int main(){
    char firstName[]="naina";
    char lastName[]="bhagat";
    printName(firstName);
    printName(lastName);
    return 0;
}

void printName(char arr[]){
    for(int i=0;arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
} 


#include<stdio.h>
void printName(char arr[]);
int main(){
    char name[50];
    printf("Enter your name:-");
    scanf("%s",name);
    printf("your name is %s",name);
    return 0;
}

void printName(char arr[]){
    for(int i=0;arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}


#include<stdio.h>
void printName(char arr[]);
int main(){
    char firstName[50];
    printf("Enter your first name:-");
    scanf("%s",firstName);
    printf("your first name is %s",firstName);
    return 0;
}

void printName(char arr[]){
    for(int i=0;arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}


#include<stdio.h>
void printName(char arr[]);
int main(){
    char str[100];
    fgets(str,100,stdin);
    puts(str);
}

void printName(char arr[]){
    for(int i=0;arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}


#include<string.h>
#include<stdio.h>
int main(){
    char oldStr[]="Hello";
    char newStr[]="world";
    strcpy(newStr,oldStr);
    puts(newStr);
    return 0;
}

#include<string.h>
#include<stdio.h>
int main(){
    char firstStr[100]="heloo";
    char seacondStr[]="world";
    strcat(firstStr,seacondStr);
    puts(firstStr);
    return 0;
}


#include<string.h>
#include<stdio.h>
int main(){
    char firststr[]="apple";
    char secondstr[]="banana";
    printf("%d\n",strcmp(firststr,secondstr));
    return 0;
}
