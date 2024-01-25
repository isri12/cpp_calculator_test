#include <iostream>
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
#include "factorial.h"
#include <stringmanipulator.h>
#include <fcgi_stdio.h>

int main() {

     while (FCGI_Accept() >= 0) {
        std::cout << "Content-type: text/html\r\n\r\n";
        std::cout << "<html><body>";

        // Get input from the environment variables or use a form to submit input
        char* query = getenv("QUERY_STRING");
        if (query) {
            // Parse query and perform calculations
            // Example: parse query, calculate result, and display it
            double operand1, operand2;
            if (sscanf(query, "operand1=%lf&operand2=%lf", &operand1, &operand2) == 2) {
                double result = operand1 + operand2;  // You can extend this for other operations
                std::cout << "<h2>Result: " << result << "</h2>";
            } else {
                std::cout << "<p>Error: Invalid input</p>";
            }
        }

        std::cout << "</body></html>";
    }   

    // double num1, num2;
    // char operation;

    // std::cout << "Simple Calculator" <<std::endl;
    // std::cout << "------------------" <<std::endl;

    // std::cout << "Enter first number: ";
    // std::cin >> num1;

    // //int result = factorial(3);

    // std::cout << "Enter an operator (+, -, *, /): ";
    // std::cin >> operation;

    // std::cout << "Enter second number: ";
    // std::cin >> num2;

    // double result;
    // Addition a1;

    // switch (operation) {
    //     case '+':
    //         result = a1.add(num1, num2);
    //         break;
    //     case '-':
    //         result = subtract(num1, num2);
    //         break;
    //     case '*':
    //         result = multiply(num1, num2);
    //         break;
    //     case '/':
    //         if (num2 != 0) {
    //             result = divide(num1, num2);
    //         } else {
    //             std::cout << "Error: Division by zero!" << std::endl;
    //             return 1; // Exit with an error code
    //         }
    //         break;
    //     default:
    //         std::cout << "Invalid operator!" << std::endl;
    //         return 1; // Exit with an error code
    // }

    // std::cout << "Result: " << result << std::endl;

    return 0; // Exit successfully
}


