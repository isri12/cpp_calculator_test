#ifndef STRING_MANIPULATOR_H
#define STRING_MANIPULATOR_H

#include <string>

class StringManipulator
{
    public:
        //constructor 
        StringManipulator(const std::string& inputString);

        //concatenate
        std::string concatenate(const std::string& otherString);

        //reverse the string 
        std::string reverse();

        //returns length of str
        int length();

    private:
    std::string str;
};

#endif