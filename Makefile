TARGET = main

all: $(TARGET)

main:
	g++ ./src/main.cpp ./src/CommissionEmployee.cpp ./src/Employee.cpp ./src/HourlyEmployee.cpp ./src/reading.cpp ./src/SalariedEmployee.cpp -o a.out -std=c++11

clean:
	rm a.out