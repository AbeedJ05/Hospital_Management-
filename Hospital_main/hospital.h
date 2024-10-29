#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

class HOSPITAL {
private:
    int age;
    int stay_days;
    float pt_stay_price;
    float total_bill;
    char phone[10];
    char pt_room[20];
    char name[20];
    char address[50];

public:
    HOSPITAL();
    void pt_info();
    void room();
    void print_bill();
    void total_bill_calc();
};

#endif // HOSPITAL_H
