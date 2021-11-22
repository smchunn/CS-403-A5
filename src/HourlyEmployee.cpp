//
// Created by Spencer Chunn on 10/18/21.
//

#include "HourlyEmployee.h"

double HourlyEmployee::getEarning() const{
    if(Hours <= 40){
        return double(this->Hours * this->HourlyRate);
    }
    else if(this->Hours <= 50){
        return double((40 * this->HourlyRate) + ((this->Hours - 40) * this->HourlyRate * 1.5));
    }
    else{
        return double(double((40 * this->HourlyRate) + ((10) * this->HourlyRate * 1.5)) + ((this->Hours - 50) * this->HourlyRate * 2));
    }
    return 0.0;
}

std::string HourlyEmployee::getInfo() const{
    return this->getFirstName() + " " + this->getLastName();
}


HourlyEmployee::HourlyEmployee(const std::string &firstName, const std::string &lastName, int Hours, float HourlyRate)
        : Employee(firstName, lastName){
    this->Hours = Hours;
    this->HourlyRate = HourlyRate;

}