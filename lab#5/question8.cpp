#include <iostream>
using namespace std;
int main() 
{
    // Variables to store user input
    double totalIncome, capitalGains, interestIncome, totalSalesAmount;
    double incomeTaxRate, capitalGainsTaxRate, interestTaxRate, salesTaxRate;
    // Prompt the user to enter various types of income
    cout << "Enter total income: ";
    cin >> totalIncome;
    cout << "Enter capital gains: ";
    cin >> capitalGains;
    cout << "Enter interest income: ";
    cin >> interestIncome;
    cout << "Enter total sales amount: ";
    cin >> totalSalesAmount;
    // Prompt the user to enter tax rates for each type in percentage form
    cout << "Enter income tax rate (%): ";
    cin >> incomeTaxRate;
    cout << "Enter capital gains tax rate (%): ";
    cin >> capitalGainsTaxRate;
    cout << "Enter interest tax rate (%): ";
    cin >> interestTaxRate;
    cout << "Enter sales tax rate (%): ";
    cin >> salesTaxRate;
    // Calculate taxes for each type
    double incomeTax = (incomeTaxRate / 100) * totalIncome;
    double capitalGainsTax = (capitalGainsTaxRate / 100) * capitalGains;
    double interestTax = (interestTaxRate / 100) * interestIncome;
    double salesTax = (salesTaxRate / 100) * totalSalesAmount;
    // Print out the calculated taxes
    cout << "\nCalculated Taxes:\n";
    cout << "Income Tax: $" << incomeTax << endl;
    cout << "Capital Gains Tax: $" << capitalGainsTax << endl;
    cout << "Interest Tax: $" << interestTax << endl;
    cout << "Sales Tax: $" << salesTax << endl;
}
