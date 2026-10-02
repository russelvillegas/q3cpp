#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int Npass;
    double Bfare, distkm, ratekm, tf, bkfeepercent;
    double DistCharge, pftotal, bookfee, subtotal, sbtfin;

    cout << "Enter Base Fare: ";
    cin >> Bfare;

    cout << "Enter Distance (km): ";
    cin >> distkm;

    cout << "Enter Rate: ";
    cin >> ratekm;

    cout << "Enter Toll Fee: ";
    cin >> tf;

    cout << "Enter Booking Fee Percentage: ";
    cin >> bkfeepercent;

    cout << "Enter Number of Passengers: ";
    cin >> Npass;

    DistCharge = distkm * ratekm;
    pftotal = Bfare + DistCharge + tf;
    bookfee = pftotal * bkfeepercent / 100;
    subtotal = pftotal + bookfee;
    sbtfin = subtotal / Npass;

    cout << fixed << setprecision(2);
    cout << "\nBreakdown" << endl;
    cout << "___________________________" << endl;
    cout << "Distance Charge: " << DistCharge << endl;
    cout << "Pre-Fee Total: " << pftotal << endl;
    cout << "Booking Fee: " << bookfee << endl;
    cout << "Total Fare: " << subtotal << endl;
    cout << "Number of Passengers: " << Npass << endl;
    cout << "Share per Passenger: " << sbtfin << endl;

    return 0;
}
