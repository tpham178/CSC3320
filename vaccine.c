#include<stdio.h>
#include<string.h>
#include<time.h>
//structure to hold the record
struct record{
char first[40];//first name
char last[40];//last name
int dd,mm,yy;//date info
char gender[6];//gender
int pdd,pmm,pyy;//Previous date
int dnumber;//Dose number
char vacType[30];//vaccine type
char zip[6];//zipcode
};
//write function to calculate age
int getage(int pdate,int pmonth,int pyear,int bdate,int bmonth,int byear){
 int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};//number of days in month
 if(bdate>pdate){
  pdate = pdate+month[bmonth-1];//assign new date
  pmonth = pmonth-1;
 }
 if(bmonth>pmonth){
  pyear = pyear-1;
  pmonth = pmonth+12;
 }
 int final_date = pdate-bdate;
 int final_month = pmonth-bmonth;
 int final_year = pyear-byear;
 return final_year;
}


int main(){
 struct record r1[10];//Declare an array of 10 records
 int choice; //choice of vaccine
 char id[8]; //unique number
 char age[2]; //age
 int i;
 for(i=0;i<10;i++){
  printf("Enter the detail for user %d:\n",i+1);
  printf("Enter first name: ");
  scanf("%s",&r1[i].first);
  printf("Enter last name: ");
  scanf("%s",&r1[i].last);
  printf("Enter birthday(mm/dd/yyyy): ");
  scanf("%d/%d/%d",&r1[i].mm,&r1[i].dd,&r1[i].yy);
  printf("Enter gender: ");
  scanf("%s",&r1[i].gender);
  printf("Enter dose number: ");
  scanf("%d",&r1[i].dnumber);
  if(r1[i].dnumber==2){
   printf("Enter previous dose date(mm/dd/yyyy): ");
   scanf("%d/%d/%d",&r1[i].pmm,&r1[i].pdd,&r1[i].pyy);
  }
  printf("What type of vaccine:\n");
  scanf("%s",&r1[i].vacType);
  printf("Enter zip code: ");
  scanf("%s",&r1[i].zip);
  //copy first letter of last name and first name to string
  id[0] = r1[i].first[0];
  id[1] = r1[i].last[0];
  //Acquire current date
  time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  //use get age funct
  int ageTemp = getage(tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900,r1[i].dd,r1[i].mm,r1[i].yy);
  //copy age to ID
  id[2] = (char)(ageTemp/10+'0');//Append null at the end
  id[3] = (char)(ageTemp%10+'0'); 
  //copy first letter of vaccinetype
  id[4] = r1[i].vacType[0];
  //Copy last 3 digit of zip
  id[5] = r1[i].zip[3];
  id[6] = r1[i].zip[4];
  id[7] = r1[i].zip[5];
  //Print details
  printf("First name: %s\n",r1[i].first);
  printf("Last name: %s\n",r1[i].last);
  printf("Date of birth: %d/%d/%d\n",r1[i].mm,r1[i].dd,r1[i].yy);
  printf("Gender: %s\n",r1[i].gender);
  printf("Dose number: %d\n",r1[i].dnumber);
  if(r1[i].dnumber==2){//print previous date if user has dose 2
   printf("Previous dose date: %d/%d/%d\n",r1[i].pmm,r1[i].pdd,r1[i].pyy);
  }
  printf("Vaccine type: %s\n",r1[i].vacType);
  printf("Zip code: %s\n",r1[i].zip);
  printf("Code ID: %s\n",id);
 }
return 0;
}

