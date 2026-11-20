#include <stdio.h>
int main()
{
float initial_balance;
float withdrawal_amount;
float current_balance;

printf("whats your initial balance?\n");
scanf("%f",&initial_balance);

if(initial_balance>0)
{printf("How much do you wish to withdraw?\n");
scanf("%f",& withdrawal_amount);

current_balance=initial_balance-withdrawal_amount;

if(withdrawal_amount<=initial_balance)
{printf("you have withdrawn %.2f KES and your balance amounts to %.2f KES\n",withdrawal_amount,current_balance);
initial_balance=current_balance;}

else
{
printf("you do not have sufficient funds to withdraw\n");
}
}

return 0;
}