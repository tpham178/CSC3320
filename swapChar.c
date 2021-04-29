#include<stdio.h>
#include<string.h>
#include<ctype.h>
//Program will swap two varianles without using a third variable
void swap(char *a, char *b){ //Write a program to accept two characters as parameter
*a = *a + *b;//Adding b to a 
*b = *a - *b;//Assigning b to the value of a minus b. Notice that this value of a has increased by b. So a minus b now is the old a value
*a =*a - *b;//Assigning a to the value of a minus b. Notice that b is now the value of old a. So new a minus old a is b because we increased a by value of b
}

int main(){
char a[100], b[100];
char *p = &a[0], *q = &b[0];
printf("Enter the first string: ");
scanf("%s", a);
printf("Enter the second string. Must have the same length as first string: ");
scanf("%s", b);
int i = 0, j = 0; //Declare variable to traverse the array
if(strlen(a)!=strlen(b)){
printf("Two strings are not the same length!");
return 0;
}
for(i=0; i<strlen(a); i++){
  if(isalpha(*a+i) && isdigit(*b+j)){ //if the char is alphabet in 1st string and digit in second string
   swap(p+i,q+j);
   j++; //next element in 2nd string
   continue; //skip the rest of the loop
  }
  if(isdigit(*a+i) && isalpha(*b+j)){ //vice versa
   swap(p+i,q+j); 
   j++;
   continue;
  }
}
printf("First string after swap: %s\n", a);
printf("Second string after swap: %s\n", b);
return 0;
}

