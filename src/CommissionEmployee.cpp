//
// Created by Spencer Chunn on 10/18/21.
//

#include "CommissionEmployee.h"

double CommissionEmployee::getEarning() const{
    return ((this->Sales * this->CommissionRate) > this->MinimumSalary) ? (this->Sales * this->CommissionRate): this->MinimumSalary;
}

std::string CommissionEmployee::getInfo() const{
    return this->getFirstName() + " " + this->getLastName();
}


CommissionEmployee::CommissionEmployee(const std::string &firstName, const std::string &lastName, int MinimumSalary, int Sales, float CommissionRate)
        : Employee(firstName, lastName){
    this->MinimumSalary = MinimumSalary;
    this->Sales = Sales;
    this->CommissionRate = CommissionRate;


}
