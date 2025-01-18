#include<stdio.h>
int main(){

    int a,b,c,wish;

    printf("Enter the first number :");
    scanf("%d",&a);

    printf("enter the second number :");
    scanf("%d",&b);

    printf("-: HERE IS THE ARITHMATIC OPERATOR :- \n");
    printf("1-> Addition\n");
    printf("2-> Substranction\n");
    printf("3-> Multiplication \n");
    printf("4-> division \n");
    printf("5-> Exit\n");

    printf("SELECT OPERATOR YOUR CHOICE :- \n");
    scanf("%d",&wish);

    switch(wish){
        case 1 :
        c=a+b; 
        printf("the addition is %d :",c);
        break;

        case 2:
        c=a-b;
        printf("The subtraction is %d",c);

        break;

        case 3:
        c=a*b;
        printf("The multiplication is %d ", c);
        break;

        case 4:
        c=a/b;
        printf("The division is %d ",c);
        break;

        case 5:
        printf("Exit");
        break;
    }


 
    return 0;
}  


//                                 OR


#include<stdio.h>
void greet();
void wish();
void invite();
int main(){
    greet();
    wish();
    invite();


    return 0;
}
void greet(){

    for(int i=1; i<=2; i++){
        printf("Good morning\n");
    }
    printf("\n");
}
void wish(){
    int i;
    for(i=1; i<=3;i++){
        printf("Happy Birthady!\n");
    }
    printf("\n");
}
void invite(){
    int i;

    for(i=1; i<=4; i++){
        printf("plz come to my birthday party\n");
    }
    printf("\n");
}

