//
// Created by Spencer Chunn on 10/18/21.
//
#include "reading.h"
#include <fstream>
#include <sstream>
#include "CommissionEmployee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include <cstring>

std::vector<std::string> split(std::string inString, char c = ' '){
    std::vector<std::string> A;
    std::stringstream ss(inString);
    std::string s;
    while(getline(ss, s, c)){
        A.push_back(s);
    }
    return A;
}

std::vector<Employee *> *

readFrom(std::string filename){
    std::ifstream infile;
    infile.open(filename);
    std::string currentLine;
    std::vector<std::string> curEmpl;
    std::vector<Employee *> *EmployeeVector = new std::vector<Employee *>;
    while(std::getline(infile, currentLine)){
        if(currentLine.empty())
            break;
        curEmpl = split(currentLine);
        if(strcmp(curEmpl[0].c_str(), "salaried") == 0){
            EmployeeVector->push_back(new SalariedEmployee(curEmpl[1], curEmpl[2],
                                                           std::stoi(curEmpl[3])));
        } else if(strcmp(curEmpl[0].c_str(), "hourly") == 0){
            EmployeeVector->push_back(new HourlyEmployee(curEmpl[1], curEmpl[2],
                                                         std::stoi(curEmpl[3]),
                                                         std::stof(curEmpl[4])));
        } else if(strcmp(curEmpl[0].c_str(), "commission") == 0){
            EmployeeVector->push_back(new CommissionEmployee(curEmpl[1], curEmpl[2],
                                                             std::stoi(curEmpl[3]),
                                                             std::stoi(curEmpl[4]),
                                                             std::stof(curEmpl[5])));
        }
    }
    return EmployeeVector;
}
