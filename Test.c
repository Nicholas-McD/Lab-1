#include <stdio.h>
#include <string.h>

void deposit(double *balance, double amount)
{
    *balance += amount;
    printf("Deposit successful. Current balance: %.2f\n", *balance);
}

void withdraw(double *balance, double amount)
{
    if (amount <= *balance) {
        *balance -= amount;
        printf("Withdrawal successful. Current balance: %.2f\n", *balance);
    } else {
        printf("Insufficient balance. Cannot withdraw.\n");
    }
}

int main(void)
{
    char sacno[] = "SB-123";
    double Opening_balance;
    double deposit_amt;
    double withdrawal_amt;
    double balance;

    Opening_balance = 1000.0;
    balance = Opening_balance;

    printf("A/c. No. %s Balance: %.2f\n", sacno, Opening_balance);

    deposit_amt = 1500.0;
    printf("Deposit Amount: %.2f\n", deposit_amt);
    deposit(&balance, deposit_amt);

    withdrawal_amt = 750.0;
    printf("Withdrawal Amount: %.2f\n", withdrawal_amt);
    withdraw(&balance, withdrawal_amt);

    withdrawal_amt = 1800.0;
    printf("Attempt to withdrawal Amount: %.2f\n", withdrawal_amt);
    withdraw(&balance, withdrawal_amt);

    return 0;
}
