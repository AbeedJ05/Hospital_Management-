#include "hospital.h"
#include <iostream>
#include <cstring>

using namespace std;

HOSPITAL::HOSPITAL() {
    age = 0;
    stay_days = 1;
    pt_stay_price = 0;
    total_bill = 0;
    memset(phone, '\0', sizeof(phone));
    memset(pt_room, '\0', sizeof(pt_room));
    memset(name, '\0', sizeof(name));
    memset(address, '\0', sizeof(address));
}

void HOSPITAL::pt_info() {
    cout << "\n ENTER PATIENT NAME: ";
    cin.ignore();
    cin.getline(name, 20);

    cout << "\n ENTER PATIENT AGE: ";
    cin >> age;

    cout << "\n ENTER PATIENT ADDRESS: ";
    cin.ignore();
    cin.getline(address, 50);

    cout << "\n PHONE NO: ";
    cin.getline(phone, 10);
}

void HOSPITAL::room() {
    char rooms[4][20] = {"General Ward", "Semi Private", "Private", "Deluxe"};
    int price_rooms[4] = {500, 1000, 2000, 5000};
    int ch = 0;

    while (true) {
        cout << "\n* PATIENT ADMISSION *";
        cout << "\n Available Rooms:\n";
        for (int i = 0; i < 4; i++) {
            cout << i + 1 << ". " << rooms[i] << endl;
        }
        cin >> ch;

        if (ch >= 1 && ch <= 4) {
            break;
        } else {
            cout << "\nInvalid input. Enter Again.";
            continue;
        }
    }

    cout << "\n Enter No of days stayed: ";
    cin >> stay_days;

    ch -= 1;  // Adjust for 0-based index
    strcpy(pt_room, rooms[ch]);
    pt_stay_price = price_rooms[ch] * stay_days;
}

void HOSPITAL::print_bill() {
    cout << "\n------------------------------------";
    cout << "\n| Patient Name: " << name;
    cout << "\n| Address: " << address;
    cout << "\n| Phone: " << phone;
    cout << "\n| Room: " << pt_room;
    cout << "\n| Stay Price: " << pt_stay_price;
    cout << "\n| Total Bill: " << total_bill;
    cout << "\n------------------------------------";
}

void HOSPITAL::total_bill_calc() {
    total_bill = pt_stay_price; // Add other charges as needed
}
