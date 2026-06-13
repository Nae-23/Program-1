// This program calculates the monthly sales tax at a retail store
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int month = 12;
    int year = 2090;
    double total = 0.0;
    double county_tax = 0.0;
    double state_tax = 0.0;
    double product_sale = 0.0;
    double total_tax = 0.0;

    // Get the month.
    cout << "Enter the month (1-12): ";
    cin >> month;
    // Get the year.
    cout << "Enter the year: ";
    cin >> year;
    // Get the total sales.
    cout << "Enter the total sales: ";
    cin >> total;

    // Calculate the county tax.
    county_tax = total * 0.02;
    // Calculate the state tax.
    state_tax = total * 0.04;
    // Calculate the total tax.
    total_tax = county_tax + state_tax;
    // Calculate the product sales (before tax).
    product_sale = total / 1.06;

    // Display the results.
    cout << fixed << setprecision(2);
    cout << "Month: " << month << endl;
    cout << "Year: " << year << endl;
    cout << "Total Sales: $" << total << endl;
    cout << "County Tax: $" << county_tax << endl;
    cout << "State Tax: $" << state_tax << endl;
    cout << "Total Tax: $" << total_tax << endl;
    cout << "Product Sales: $" << product_sale << endl;

    return 0;
}