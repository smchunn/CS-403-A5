//
// Created by Spencer Chunn on 10/18/21.
//
#include "SalariedEmployee.h"

double SalariedEmployee::getEarning() const{
    return this->WeeklySalary;
}

std::string SalariedEmployee::getInfo() const{
    return this->getFirstName() + " " + this->getLastName();
}


SalariedEmployee::SalariedEmployee(const std::string &firstName, const std::string &lastName, int WeeklySalary)
        : Employee(firstName, lastName){
    this->WeeklySalary = WeeklySalary;

}
