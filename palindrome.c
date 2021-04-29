#include<stdio.h>
#include<string.h>
//Write a program to check for palindrome. This program will return an int to indicate whether it is palindrome or not
int is_palindrome(char* text, int length){ //take two parameters: text string and length of text
int palin; //Result to return
char reverse_text[100]; //Declare a character array to hold the reverse text
int i,j = 0; //Declare variables for position of text and reverse text
//Write a loop to reverse text
for(i=length-1; i>=0; i--){//The loop is going backwards
  reverse_text[j] = text[i];
  j++;
}
reverse_text[j] = '\0'; //Appends null at the end to show that the string has ended.
palin = strcmp(text,reverse_text); //Use function string compare to get result
return palin;
}

int main(){
char text[100];//Declare text
printf("Enter the text: ");
scanf("%s", text);
int palin = is_palindrome(text,strlen(text)); //Get the result from function
if(palin==0){
  printf("%s is a palindrome\n", text);
}
else{
  printf("%s is not a palindrome\n", text);
}
return 0;
}
