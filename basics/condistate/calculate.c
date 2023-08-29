// to calculate sum of two numbers if the user enters +,difference of two numbers if the user enters -, product of two numbers if the user enters *, quotient of two numbers if the user enters /
#include <stdio.h>
void main() {
char ch;
float a,b,add,sub,pro,div;
printf("Enter the num:");
scanf("%f",&a);
printf("Enter 2nd num:");
scanf("%f",&b);
printf("Enter the character:");
scanf("\n%c",&ch);
if (ch=='+') {
add=a+b;
printf("%f",add);
}
if(ch=='-') {
sub=a-b;
printf("%f",sub);
}
if(ch=='*') {
pro=a*b;
printf("%f",pro);
}
if(ch=='/') {
div=a/b;
printf("%f",div);
}
else{
printf("Please enter the valid input");
}
}
