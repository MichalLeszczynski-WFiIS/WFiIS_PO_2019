#pragma once
#include <iostream>
#include <vector>
class OutOfRange;

class Number {
public:

Number(std::string name, double number): m_name(name), m_number(number) {}


static void SetRange(double low, double high);

static Number* Factory(std::string name, double number);

void Print() const
{
    std::cout<< m_name << " = " << m_number << std::endl;
}

double get_num() const
{
    return m_number;
}

std::string get_name() const
{
    return m_name;
}

static double get_low();
static double get_high();

static std::vector<Number*> s_num_container;

private:

static double s_low;
static double s_high;
std::string m_name;
double m_number;


};

