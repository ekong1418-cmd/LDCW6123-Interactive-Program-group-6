/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
// Online C++ compiler to run C++ program online

#include <iostream>
using namespace std;


int main()
{
    string name;
    int distance;
    int choice;
    double fare;

    cout << "===== Grab Fare Calculator System =====" << endl;

    // Input customer name
    cout << "Enter customer name: ";
    cin >> name;

    // Input distance
    cout << "Enter distance (km): ";
    cin >> distance;

Add if else vehicle selection
    // Vehicle selection
    cout << "\nSelect Grab service:" << endl;
    cout << "1. GrabBike" << endl;
    cout << "2. GrabCar" << endl;
    cout << "3. GrabPremium" << endl;

    cout << "Enter your choice: ";
    cin >> choice;


    // Fare calculation using if/else
    if (choice == 1)
    {
        fare = distance * 1.20;
        cout << "\nVehicle: GrabBike" << endl;
    }

    else if (choice == 2)
    {
        fare = distance * 2.50;
        cout << "\nVehicle: GrabCar" << endl;
    }

    else if (choice == 3)
    {
        fare = distance * 4.00;
        cout << "\nVehicle: GrabPremium" << endl;
    }

    else
    {
        cout << "Invalid choice!" << endl;
        return 0;
    }


    // Output result
    cout << "\n===== Booking Summary =====" << endl;
    cout << "Customer Name: " << name << endl;
    cout << "Distance: " << distance << " km" << endl;
    cout << "Total Fare: RM " << fare << endl;

    cout << "\nThank you for using Grab!" << endl;


    return 0;
}
