//
// Created by Spencer Chunn on 10/18/21.
//

#ifndef ASSIGNMENT5_COMMISSIONEMPLOYEE_H
#define ASSIGNMENT5_COMMISSIONEMPLOYEE_H

#include "Employee.h"

class CommissionEmployee : public Employee{
public:
    CommissionEmployee(const std::string &firstName, const std::string &lastName, int MinimumSalary, int Sales, float CommissionRate);

    virtual ~CommissionEmployee() = default; // compiler generates virtual destructor

    double getEarning() const override;
    std::string getInfo() const override;

private:
    int MinimumSalary;
    int Sales;
    float CommissionRate;
};


#endif //ASSIGNMENT5_COMMISSIONEMPLOYEE_H
