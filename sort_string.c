#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Write a function to sort string array
void sort_alphabetic(char* array[],int n,char order){ //the function has 3 parameters:an array, size of the array, and the order to sort
int i,j; //keep track the interation
char* temp;//temporary holder
if(order=='a'||order=='A'){//Evaluate the sort order, this is ascending order
 for(i=0;i<n;i++){//Outter loop change to next variable
  for(j=i+1;j<n;j++){//Inner loop to move to the lowest char to the front
   int compare = strcmp(array[i],array[j]);
   if(compare>0){//Compare two string array
    temp = array[i];
    array[i] = array[j];
    array[j]=temp;
   }//Closing if statement
  }//Closing inner loop
 }//Closing outter loop
}//Closing the big if statement
else if(order=='d'||order=='D'){//Evaluate the descending sort order
 //Repeat the process but this time moving the largest char to the front
 for(i=0;i<n-1;i++){//Outter loop change to next variable
  for(j=i+1;j<n;j++){//Inner loop to move to the lowest char to the front
   int compare = strcmp(array[i],array[j]);
   if(compare<0){//Compare two string array
    temp = array[i];
    array[i] = array[j];
    array[j] = temp;
   }//Closing if statement
  }//Closing inner loop
 }//Closing outter loop
}//Closing the big if statement
}
int main(){
char* array[]={"Systems","Programming","Deep","Learning","Internet","Things","Robotics","Course"};//declare array
int n = 8;
int i;
char order;
printf("Enter the order you want to sort: ");
scanf(" %c",&order);
sort_alphabetic(array,n,order);
//print the sorted array
printf("The sorted array is:\n");
for(i=0;i<n;i++){
 printf("%s \n",array[i]);
}
return 0;
}
