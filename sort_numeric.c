#include<stdio.h>
//Write a function to sort array
void sort_numeric(int *array,int n,char order){//the function has 3 parameters:an array, size of the array, and the order to sort
int i,j,temp; //variables used for interation
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
//creating array
int n=11,i; //store the number of the array
int array[] = {10,0.25,-2342,12123,3.145435,6,6,5.999,-2,-5,-109.56}; //storing n+1 to include index 0
char order; //ascending or descending
printf("Enter the sort type (ascending or descending):\n");
scanf(" %c",&order);
sort_numeric(array,n,order);
printf("Your array after sorting:\n");
for(i=0;i<n;i++){
 printf("%d ",*(array+i));
}
printf("\n");
return 0;
}

    

