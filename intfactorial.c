#include <stdio.h>
int factorial(int num){
if(num==0) return 1;
return num*factorial(num-1);
}
int main(){
int num;
printf("Enter a value that you want to find the factorial: \n");
scanf("%d", &num);
printf("Factorial: %d \n",factorial(num));
return 0;
}
