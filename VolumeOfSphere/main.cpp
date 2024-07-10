#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Find the volume of a sphere by just entering the radius :)" << endl;
    cout << "Enter Radius Here: " << endl;
    double r;
    cin >> r;
    double pi = 22 / 7;
    cout << "Enter Your Unit (Short): " << endl;
    cin.ignore();
    string unit;
    getline(cin, unit);
    cout << "Your Area = " << (4 / 3) * pi * (r * r * r) << unit << "\u00B3";
    return 0;
}
