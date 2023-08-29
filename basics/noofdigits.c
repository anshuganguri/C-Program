#include <stdio.h>
#include<math.h>
void main(){
int n;
int digitsCount=0;
printf("Enter number:");
scanf("%d",&n);
digitsCount=log10(n)+1;
printf("%d",digitsCount);
}
