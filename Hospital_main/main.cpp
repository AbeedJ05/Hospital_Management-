#include <iostream>
#include "hospital.h"
#include "medicine.h"
#include "labtest.h"

using namespace std;

int main() {
    HOSPITAL hospital;
    MEDICINE medicine;
    LABTEST labTest;
    int choice;

    while (true) {
        cout << "\n----- HOSPITAL MANAGEMENT SYSTEM -----";
        cout << "\n1. Patient Info";
        cout << "\n2. Room Booking";
        cout << "\n3. Medicine";
        cout << "\n4. Lab Test";
        cout << "\n5. Print Bill";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hospital.pt_info();
                break;
            case 2:
                hospital.room();
                break;
            case 3:
                medicine.inputMedicine();
                break;
            case 4:
                labTest.inputLabTest();
                break;
            case 5:
                hospital.total_bill_calc();
                hospital.print_bill();
                break;
            case 6:
                return 0;
            default:
                cout << "\nInvalid choice. Try again.";
        }
    }

    return 0;
}
