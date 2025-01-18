// #include<stdio.h>
// void hello();
// void bye();

// int main()
// {
//     hello();
//     bye();
//     hello();
//     bye();


//     return 0;
// }

// void hello(){
//     printf("hello guys\n");

// }

// void bye(){
//     printf("good bye guys\n");
// }



// write a function that print NAMASTE if user is indian & printf BONJOUR if user is french....................

#include<stdio.h>
void indian();
void french();

void indian(){
    printf("NAMASTE\n");
    french();
}

void french(){

    printf("BONJOUR");
}


int main(){
    char ch;
    printf("Enter the i for indian & f for french ");
    scanf("%c",&ch);

    if(ch == 'i')
    {
        indian();
    }
    else if(ch=='f')
    {
     french();
    }
    else{
        printf("this is invalid charactor\n");
        printf("please enter only indian or french \n");
    }
    return 0;
}
