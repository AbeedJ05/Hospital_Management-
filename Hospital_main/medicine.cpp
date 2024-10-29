#include "medicine.h"
#include <iostream>

using namespace std;

MEDICINE::MEDICINE() {
    quantity = 0;
    price_per_medicine = 0.0;
    total_price = 0.0;
    memset(medicine_name, '\0', sizeof(medicine_name));
}

void MEDICINE::inputMedicine() {
    cout << "\nEnter Medicine Name: ";
    cin.ignore();
    cin.getline(medicine_name, 20);

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price per Medicine: ";
    cin >> price_per_medicine;

    total_price = quantity * price_per_medicine;

    cout << "\nTotal Price for Medicine " << medicine_name << ": " << total_price << endl;
}
