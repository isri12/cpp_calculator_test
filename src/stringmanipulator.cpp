#include <iostream>
#include <string>
#include <algorithm>
#include <stringmanipulator.h>

class StringManipulator
{
    public:
        //constructor 
        StringManipulator(const std::string& inputString): str(inputString)
        {     
        }

        //concatenate
        std::string concatenate(const std::string& otherString)
        {
            return str + otherString;
        }

        //reverse the string 
        std::string reverse()
        {
            std::string reverseStr=str;
            std::reverse(reverseStr.begin(),reverseStr.end());
            return reverseStr;
        }

        int length()
        {
            return str.length();
        }

    private:
    std::string str;
};