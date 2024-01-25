#include <iostream>
#include <string>
#include <iostream>
#include <algorithm>
#include "stringmanipulator.h"

class StringManipulator
{
    public:
        //constructor 
        StringManipulator(const std::string& inputstr): str(new std::string(inputstr))
        {   
            std::cout<<"Constructor called"<<str<<std::endl;  
        }

        //concatenate
        std::string concatenate(const std::string& otherString)
        {
            return *str + otherString;
        }

        //reverse the string 
        std::string reverse()
        {
            std::string reverseStr=*str;
            std::reverse(reverseStr.begin(),reverseStr.end());
            return reverseStr;
        }

        size_t length() const
        {
            return str->length();
        }

        ~StringManipulator() 
        {
            delete str; 
        }

    private:
    std::string *str;
    //std::string str;
};