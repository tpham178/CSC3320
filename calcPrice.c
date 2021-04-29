#include <stdio.h>

int main(){
//creating variable to store data
int item_number;
double unit_price;
int quantity;
char buy_date[12];
//asking for user input
printf("Enter item number:");
scanf("%d",&item_number);
printf("Enter unit price:");
scanf("%lf",&unit_price);
printf("Enter quantity:");
scanf("%d",&quantity);
printf("Enter purchase date (mm/dd/yyyy):");
scanf("%s",&buy_date);
//print information
printf("Item\tUnit Price\tQTY\tPurchase Date\tTotal Amount\n");
printf("%-d\t$%9.2lf\t%-d\t%-s\t$%9.2lf\n\n", item_number, unit_price, quantity, buy_date, unit_price*quantity);
return 0; //end the script
}
