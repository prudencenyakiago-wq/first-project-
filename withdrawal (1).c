#include <stdio.h>

int main()
{
 float initial_balance;
 float amount_to_withdraw;
 float balance;
 float current_balance;
 

 printf("whats your bank balance?.,,\n");
 scanf("%f", & initial_balance);

 while(initial_balance>0)
 {printf("how much do n wish to withdraw?\n");
scanf("%f", &amount_to_withdraw);}

current_balance=initial_balance-amount_to_withdraw;

while(current_balance>amount_to_withdraw)
{printf("your current balance is %.2f\n",current_balanc


return 0;
 }