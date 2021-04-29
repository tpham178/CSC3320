#include<stdio.h>
#include<stdlib.h>
//Write a function to sort array
void sort_numeric(int *array,int n,char order){//the function has 3 parameters:an array, size of the array, and the order to sort
int i=0,j,temp; //variables used for interation
if(order=='a'||order=='A'){//Evaluate the sort order, this is ascending order
 for(i=0;i<n;i++){//Outter loop change to next variable
  for(j=i+1;j<n;j++){//Inner loop to move to the lowest number to the front
   if(*(array+j)<*(array+i)){
    //Applying the method of swapping two variable using temporary holder
    temp =  *(array+i);
    *(array+i) = *(array+j);
    *(array+j) = temp;
   }//Closing if statement
  }//Closing inner loop
 }//Closing outter loop
}//Closing the big if statement
else if(order=='d'||order=='D'){//Evaluate the descending sort order
 //Repeat the process but this time moving the largest integer to the front
 for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){
   if(*(array+j)>*(array+i)){
    temp = *(array+i);
    *(array+i) = *(array+j);
    *(array+j) = temp;
   }
  }
 }
}
}

int main(){
int *array = malloc(5*sizeof(int));//initialize the array of size 5
int size = 5; //keeping track of the size of array
int used = 0; //keeping track of used space in array.
int n; //hold the number and condition for while loop
do{
 printf("Enter the number for the array(-1 to exit): ");
 scanf("%d",&n);
 if(n==-1){//break condition
  break;
 }
 if(used == size){//The array is full
  size *= 2; //double the size of array
  array = realloc(array,size*sizeof(int)); //reallocate the array
 }
 *(array+used) = n;
 used++;
}while(n!=-1);
char order;
printf("Enter the sort order: ");
scanf(" %c",&order);
sort_numeric(array,used,order);//we use "used" variable because it is the size of array;
int i;
printf("Your array after sorting:\n");
for(i=0;i<used;i++){
 printf("%d ",*(array+i));
}
printf("\n");
return 0;
}

