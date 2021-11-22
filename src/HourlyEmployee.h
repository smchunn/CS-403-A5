//
// Created by Spencer Chunn on 10/18/21.
//

#ifndef ASSIGNMENT5_HOURLYEMPLOYEE_H
#define ASSIGNMENT5_HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee{
public:
    HourlyEmployee(const std::string &firstName, const std::string &lastName, int Hours, float HourlyRate);

    ~HourlyEmployee() override = default;

    double getEarning() const override;

    std::string getInfo() const override;

private:
    int Hours;
    float HourlyRate;
};

#endif //ASSIGNMENT5_HOURLYEMPLOYEE_H
