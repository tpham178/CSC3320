#include<stdio.h>
struct dialing_code{ //building the structure
  char *country;
  int code;
};

int main(){
int code, i; //Declaring code and variable i to tranverse the array
const struct dialing_code countries[] = {{"Argentia",54},{"Bangladesh",880},{"Brazil",55},{"China",86},{"Germany",49},{"Japan",81}}; //Creating array of structure
int n = sizeof(countries)/sizeof(*countries);//n is the number of entries
do{//Do while loop to perform the task
 int found = 0;
 printf("Please input internation code to find (-1 to exit): ");
 scanf("%d", &code);
 if(code == -1){//Exit condition
  break;
 }
 for(i=0; i<n; i++){
  if(countries[i].code==code){//Found condition
   printf("The country is %s\n", countries[i].country);
   found = 1; //Keep track if code is found
  }
 }
 if(!found){//if found is 0
  printf("Country not found.\n");
 }
}while(1); //while condition
return 0;
}
