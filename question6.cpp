#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int unitsConsumed;
    double ratePerUnit, cost, fuelAdjustment, gst, extraTax, furtherTax, totalCost;

    // Input units consumed
    cout << "Enter the number of units consumed: ";
    cin >> unitsConsumed;

    // Determine rate per unit based on units consumed range
    if (unitsConsumed >= 1 && unitsConsumed <= 100) {
        ratePerUnit = 16.48;
    } else if (unitsConsumed <= 200) {
        ratePerUnit = 22.95;
    } else if (unitsConsumed <= 300) {
        ratePerUnit = 27.14;
    } else if (unitsConsumed <= 400) {
        ratePerUnit = 32.03;
    } else if (unitsConsumed <= 500) {
        ratePerUnit = 35.24;
    } else if (unitsConsumed <= 600) {
        ratePerUnit = 36.66;
    } else if (unitsConsumed <= 700) {
        ratePerUnit = 37.8;
    } else {
        ratePerUnit = 42.72;
    }

    // Calculate cost of electricity
    cost = unitsConsumed * ratePerUnit;

    // Calculate taxes
    fuelAdjustment = 0.03 * cost;
    gst = 0.17 * cost;
    extraTax = 0.05 * cost;
    furtherTax = 0.07 * cost;

    // Calculate total cost including taxes
    totalCost = cost + fuelAdjustment + gst + extraTax + furtherTax;

    // Display the bill details
    cout << "\nElectricity Bill Details:" << endl;
    cout << "Units Consumed: " << unitsConsumed << " units" << endl;
    cout << "Cost of Electricity: PKR " << cost << endl;
    cout << "Fuel Adjustment (3%): PKR " << fuelAdjustment << endl;
    cout << "GST (17%): PKR " << gst << endl;
    cout << "Extra Tax (5%): PKR " << extraTax << endl;
    cout << "Further Tax (7%): PKR " << furtherTax << endl;
    cout << "Total Bill: PKR " << totalCost << endl;

    return 0;
}
