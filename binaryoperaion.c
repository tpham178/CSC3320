#include <stdio.h>
#include <math.h> 
int convertBinaryToInteger(int binaryNum){
int decimal=0, i=0, reminder;
while (binaryNum != 0){
reminder= binaryNum % 10;
binaryNum /= 10;
int power = pow(2,i);
decimal += reminder*power;
++i;
}
return decimal;
}

long long convertIntegerToBinary(int integerNum){
long long binary=0;
int reminder, i=1;
while(integerNum!=0){
reminder = integerNum%2;
integerNum /= 2;
binary += reminder*i;
i *= 10;
}
return binary;
}

int isBinary(int number){
int last;
while (number){
last=number%10;
if (last!=0 && last!=1){ //Find if the last digit is different than 0 and 1 because binary only consists of 0 and 1
return 0;
}
number = number/10;
}
return 1;
}

int operation(int num){
int shift3 = num<< 3;
int complement = ~(num);
return shift3+complement;
}

int main(){
printf("Enter a number you want to do the operation on, can be binary or decimal \n");
int num;
scanf("%d",&num);
if(isBinary(num)){ //check if the number entered by user is binary
long long binary = (long long) num;
num = convertBinaryToInteger(binary);
}
int new_num = operation(num);
printf("New number is: %d \n In binary: %lld", new_num, convertIntegerToBinary(new_num));
return 0; 
}
