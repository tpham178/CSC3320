#include <stdio.h>
//This function will split the seconds entered into hours, minutes, and seconds
//function declaration
void split_time(long, int*, int*, int*);
int main()
{
int n, hr = 0, min = 0, sec = 0;
printf("Enter seconds: ");
scanf("%d",&n);
//check for negative number
if(n<0){
printf("\nInvalid input");
return 0;
}
else{
split_time(n, &hr, &min, &sec);
printf("Converted format: %d hour %d mins %d secs\n", hr, min, sec);
}
return 0;
}

//function defition
void split_time(long total_sec, int *hr, int *min, int *sec){
int remain_sec = 0;
//Divide the total seconds by 3600 to get number of hours
*hr = total_sec/3600;
//Mod total_sec by 3600 to get the remaining seconds
remain_sec = total_sec%3600;
//Divide the remaining seconds by 60 to get number of minute
*min = remain_sec/60;
//For the last step, we just need to mod the remaning seconds by 60 to get seconds
*sec = remain_sec%60;
}

