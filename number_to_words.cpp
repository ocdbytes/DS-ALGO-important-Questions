#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string numToWords(int n, string s)
    {
        // function to convert number to words
        string ones[20] = {"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ", "ten ", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "};
        string tens[10] = {"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "};

        string str = "";

        // if 'n' is greater than 19
        if (n > 19)
        {
            // Suppose number is 23
            // 23 / 10 = 2, 23 % 10 = 3
            // str += "twenty " + "three "
            str += tens[n / 10] + ones[n % 10];
        }
        else
        {
            // Suppose number is 2
            // str += "two "
            str += ones[n];
        }
        // if n is there then
        // str += 'given string in function parameters'
        if (n)
            str += s;
        return str;
    }

    string convertToWords(long n)
    {
        // code here
        string result = "";
        result += numToWords((n / 10000000), "crore ");      // getting the crore digits
        result += numToWords((n / 100000) % 100, "lakh ");   // getting the lakh digits
        result += numToWords((n / 1000) % 100, "thousand "); // getting thousand digits
        result += numToWords((n / 100) % 10, "hundred ");    // getting hundred digits

        // if n > 100 and n % 100 exists or not equal to 0
        if (n > 100 && n % 100)
        {
            // adding "and "
            result += "and ";
        }

        // adding the __ hundred and __
        result += numToWords((n % 100), "");

        // returning the result
        return result;
    }
};