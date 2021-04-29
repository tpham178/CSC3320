#include <stdio.h>
int main(){
char phoneNum[13];
printf("Enter phone number [(999)999-9999]:");
scanf("%s",phoneNum);
char fphoneNum[12];
int i;
for(i=1;i<13;i++){
if(i==4){
fphoneNum[i-1]='-'; //use - instead of )
}
else{
fphoneNum[i-1]=phoneNum[i];
}
}
printf("You entered %s\n",fphoneNum);
return 0;
}
