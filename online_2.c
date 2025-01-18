// #include<stdio.h>
// int sum(int a, int b);

// int main(){
//     int a,b,sum1;
//     printf("Enter the number");
//     scanf("%d",&a);

//     printf("Ente th sec number :");
//     scanf("%d",&b);

//     sum1 = sum(a,b);
//     printf("%d",sum1);  
//     return 0;
// }

// int sum(int a, int b){

//     return a+b;
// }

// #include<stdio.h>
// int sum(int a,int b);

// int main(){
//     int sum1;
//     sum1 = sum(a,b);
//     printf("%d", sum1);
//     return 0;
// }

// int sum(int a, int b){
// return a+b;}

// #include<stdio.h>
// float convert(float cel);

// int main(){
//     float cel,far;
//     printf("Enter the number ");
//     scanf("%f",&cel);
    
//     printf("%f",far);
//     return 0;
// }

// float convert(float cel){
//     float far = cel * 9.0/5.0 + 32;
//     return far;
// }

// #include<stdio.h>
// int main(){
//     float price[3];

//     printf("Enter the prices :-");
//     scanf("%f",&price[0]);
//      scanf("%f",&price[1]);
//       scanf("%f",&price[2]);

// printf("1st prices with GST %f", price[0] + (0.18 *price [0]));
// printf("2st prices with GST %f", price[1] + (0.18 *price [1]));
// printf("3st prices with GST %f", price[2] + (0.18 *price [2]));
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     printf("Keep going, no matter what.\n");
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char str[100];
//     printf("Enter your name :- ");
//     gets(str);
//     printf("my name is ");
//     puts(str);
    
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char str[100];
//     fgets(str,100,stdin);
//     puts(str);
    
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char *canchange = "aman gautam";
//     puts(canchange);

//     canchange = "gautam";
//     puts(canchange);

//     char cannotchange[] = "aman gautam";
//     cannotchange = "gautam";
//     puts(cannotchange);


//     return 0;}

// #include<stdio.h>
// int countnum(char arr[]);
// int main(){

//     char name[100];
//     fgets(name ,100, stdin);
//     printf("the lenghth are %d ",countnum(name));
    



//     return 0;
// }

// int countnum(char arr[]){
//     int count=0;
//     int i;
//     for(i = 0; arr[i] != '\0'; i++){
//         count++;
//         return count-1;
//     }
// }

// #include<stdio.h>
// int main(){
//     struct aman{
//         int roll[100];
//         char name[100];
//         float marks[100];
//     };
    
//     struct aman s1;
//     s1.roll[0] = 2024;
//     s1.roll[1] = 2025;
//     printf("my roll num is %d\n", s1.roll[0]);
//     printf("your roll num is %d\n", s1.roll[1]);
// }

// #include<stdio.h>
// int main(){
//     FILE *ptr;
//     ptr = fopen("myname.txt" , "w");
//     if(ptr == NULL){
//         printf("does not exist");
//     }
//     else{
//         printf("fclose");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n1,n2,rs;
//     int choice;

//     printf("MENU DRIVER PROGRAMM OF CALCULATOR\n");
//     printf("1.> sum\n");
//     printf("2.> Substraction\n");
//     printf("3.> multiplication\n");
//     printf("Exit\n");
//     printf("Enter your choice :->  ");
//     scanf("%d",&choice);


//     switch(choice){
//         case 1:

//         printf("Enter the first number :");
//         scanf("%d",n1);
//         printf("Enter the first number :");
//         scanf("%d",n2);

//         rs = n1+n2;
//         printf("The result are :- %d", rs);
//         break;

//       case 2:

//         printf("Enter the first number :");
//         scanf("%d",n1);
//         printf("Enter the first number :");
//         scanf("%d",n2);

//         rs = n1-n2;
//         printf("The result are :- %d", rs);
//         break;

//         case 3:

//         printf("Enter the first number :");
//         scanf("%d",n1);
//         printf("Enter the first number :");
//         scanf("%d",n2);

//         rs = n1*n2;
//         printf("The result are :- %d", rs);
//         break;

//         case 4:

//         defoult: printf("plz enter only 1 to 4");
// break;
//     }


//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int r,c;
//     int rs;

//     printf("Enter the ROW :- ");
//     scanf("%d",&r);
//     printf("Enter the COLOMN :- ");
//     scanf("%d",&c);

//     for(int i=1; i<=r; i++){
//         for (int j = 1; j<=c; j++)
//         {
//             rs = j*i;
//             printf("%5d",rs);
        
//         }}
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// void reverseString(char *str) {
//     char *start = str;          // Pointer to the start of the string
//     char *end = str + strlen(str) - 1; // Pointer to the end of the string
//     char temp;

//     // Swap characters from start and end
//     while (start < end) {
//         temp = *start;
//         *start = *end;
//         *end = temp;

//         start++; // Move start pointer forward
//         end--;   // Move end pointer backward
//     }
// }

// int main() {
//     char str[100];

//     // Input the string
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     // Remove the newline character if present
//     size_t len = strlen(str);
//     if (len > 0 && str[len - 1] == '\n') {
//         str[len - 1] = '\0';
//     }

//     // Reverse the string using the function
//     reverseString(str);

//     // Output the reversed string
//     printf("Reversed string: %s\n", str);

//     return 0;
// }

#include <stdio.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main() {
    int x, y, choice;
    int (*operation)(int, int); // Function pointer declaration

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    // Menu for operations
    printf("Choose an operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n");
    scanf("%d", &choice);

    // Assign function pointer based on user choice
    switch (choice) {
        case 1:
            operation = add;
            break;
        case 2:
            operation = subtract;
            break;
        case 3:
            operation = multiply;
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    // Call the chosen function using the function pointer
    int result = operation(x, y);
    printf("Result: %d\n", result);

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

