// monthlypayments.cpp : This program calculates an equation of monthly payments
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    // inputs

    double loan, rate, monthly, interest, amount;
    int times;
    cout << "Loan Amount? ";
    cin >> loan;
    cout << "Monthly Interest Rate? ";
    cin >> rate;
    cout << "Number of Payments? ";
    cin >> times;

    // The following formula

    rate /= 100;
    monthly = ((rate)*pow(1 + (rate), times) / (pow(1 + (rate), times) - 1)) * loan;
    amount = monthly * times;
    interest = amount - loan;
    rate *= 100;

    // output rounding the decimals to two places

    cout << setprecision(2) << fixed << " Loan Amount: $" << loan << endl;
    cout << "Monthly Interest Rate: " << rate << "%" << endl;
    cout << "Numbers of Payments: " << times << endl;

    cout << setprecision(2) << fixed << "Monthly Payment: $" << monthly << endl << "Amount Paid Back: $" << amount << endl << "Interest Paid: $" << interest << endl;


    return 0;
}

   