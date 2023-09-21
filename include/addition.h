
#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

class Addition
{
    public:
    Addition(){ result=0; };
    double add(double num1, double num2);
    double getaddresult(double result);

    private:
    double num1;
    double num2;
    double result;

};

#endif