#ifndef MEDICINE_H
#define MEDICINE_H

#include <iostream>

class MEDICINE {
private:
    int quantity;
    float price_per_medicine;
    float total_price;
    char medicine_name[20];

public:
    MEDICINE();
    void inputMedicine();
};

#endif // MEDICINE_H
