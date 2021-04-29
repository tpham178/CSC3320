#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
//This program is responding to Part 1 question 2
int main(){
char pass[100];//Declare character array to store password
int i, score = 0, score1 = 0, score2 = 0, score3 = 0, score4 = 0, length; //Declare variable to store length of password, and the score of each criteria
int r = 0, r1 = 0, r2 = 0, r3 = 0; //Declare result indicator for each criteria
printf("Enter password: "); //Prompting user to enter password
scanf("%s",pass);
length = strlen(pass); //Storing password length
for(i = 0; i < length; i++){ //Create the loop to traverse the array
  if(isalpha(pass[i])){ //check if the character is letter
    if(pass[i]>='A' && pass[i]<='Z'){ //Check if the character is Capitalize
      r = 1; //Set flag to indicate that it sastified the capital letter requirement
    }
    else{//if it is lower case
      r1 = 1; //Set flag to indicate that it sastified the lower case requirement
    } 
    if(pass[i+1]==pass[i]+1 && pass[i+2]==pass[i+1]+1){ //check to see if there is more than 2 consecutive character 
      r3 = 1; //Set flag to indicate that it violates the lasst criteria
    }
  }
  if(isdigit(pass[i])){ //Check if it is digital
    r2 = 1; //Set flag to indicate that it sastified the number requirement
    if(pass[i+1]==pass[i]+1 && pass[i+2]==pass[i+1]+1){//check the consecutive case in numbers
      r3 = 1; //Set flag to indicate that it violates
    }
  }
}
//Check all the requirements. Notice that consecutive condition flag is different than the others
if(r == 0){
  score1 = -20;
}
if(r1 == 0){
  score2 = -20;
}
if(r2 == 0){
  score3 = -20;
}
if(r3 == 1){
  score4 = -20;
}
//Adding all the scores
score = score1 + score2 + score3 + score4;
printf("Score: %d\n", score);
//Since the score is in negative value, we have the compare differently
if(score>=(-30)){
  printf("The password is safe!\n");
}
else{
printf("The password is unsafe. Please reset!\n");
}
return 0;
}
