
#include <stdio.h>
#include <string.h>
struct item
{
   char name[20];
   float price;
   int  quantity;
   float total;
   char currency;

};

int main(){
struct item f1;


strcpy(f1.name , "ONION");
f1.price = 23.3;
f1.quantity = 3;
f1.currency ='$';


float total = f1.price * f1.quantity;
printf("Total cost: %c%.2f",f1.currency, total);


    return 0;
}
