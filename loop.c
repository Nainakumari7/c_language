#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        printf("Hello World\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    for(int i=0;i<=100;i++){
        printf("%d\n",i);
    }
    
    return 0;

}

#include<stdio.h>
int main(){
    for(int i=100;i>=0;i--){
        printf("%d\n",i);
    }
    return 0;

}

#include<stdio.h>
int main(){
    for(int i=0;i<=10;i++){
        printf("%d\n",i);
    }
    return 0;

}

#include<stdio.h>
int main(){
    int i=1;
    printf("%d\n",i++);
    printf("%d\n",i);

    printf("%d\n",++i);
    printf("%d\n",i);
    return 0;

}

#include<stdio.h>
int main(){
    int x = 2;
    printf("%d\n",--x);
    printf("%d\n",x);
    printf("%d\n",x--);
    printf("%d\n",x);
    return 0;
}


#include<stdio.h>
int main(){
    for(float i=1.0;i<=5.0;i++){
        printf("%f\n",i);
    }
    for(char ch='a';ch<='z';ch++){
        printf("%c\n",ch);
    }
    return 0;
}

#include<stdio.h>
int main(){
    int i = 1;
    while(i<=5){
        printf("Hellow world\n");
        i++;
    }
    return 0;
}


#include<stdio.h>
int main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    int i = 0;
    while(i<=num){
        printf("%d\n",i);
        i++;
    }
    return 0;
} 


#include<stdio.h>
int main(){
    int i=1;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=5);
    return 0;
}

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:-");
    scanf("%d",&num);

    int sum=0;
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);

    for(int i=num;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;
}


#include<stdio.h>
int main(){
    int num;
    printf("Enter the number");
    scanf("%d\n",&num);
    for(int i=1;i<=10;i++){
        printf("%d\n",num*i);
    }
    return 0;
}
