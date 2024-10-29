#ifndef LABTEST_H
#define LABTEST_H

#include <iostream>

class LABTEST {
private:
    int num_tests;
    float test_price;
    char test_name[20];

public:
    LABTEST();
    void inputLabTest();
};

#endif // LABTEST_H
