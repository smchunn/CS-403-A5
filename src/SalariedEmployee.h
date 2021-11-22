//
// Created by Spencer Chunn on 10/18/21.
//

#ifndef ASSIGNMENT5_SALARIEDEMPLOYEE_H
#define ASSIGNMENT5_SALARIEDEMPLOYEE_H

#include "Employee.h"

class SalariedEmployee : public Employee{
public:
    SalariedEmployee(const std::string &firstName, const std::string &lastName, int WeeklySalary);

    double getEarning() const override;

    std::string getInfo() const override;

private:
    int WeeklySalary;
};

#endif //ASSIGNMENT5_SALARIEDEMPLOYEE_H
