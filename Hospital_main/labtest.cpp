#include "labtest.h"
#include <iostream>

using namespace std;

LABTEST::LABTEST() {
    num_tests = 0;
    test_price = 0.0;
    memset(test_name, '\0', sizeof(test_name));
}

void LABTEST::inputLabTest() {
    cout << "\nEnter Lab Test Name: ";
    cin.ignore();
    cin.getline(test_name, 20);

    cout << "Enter Number of Tests: ";
    cin >> num_tests;

    cout << "Enter Price per Test: ";
    cin >> test_price;

    float total_price = num_tests * test_price;

    cout << "\nTotal Price for Lab Test " << test_name << ": " << total_price << endl;
}
