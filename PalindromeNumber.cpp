#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        string result;
        while(x != 0) {
            result += to_string(x%10); 
            x /= 10;
        }
        string temp = result;
        reverse(temp.begin(), temp.end());
        if(result == temp) {
            return true;
        }
        else return false;
    }
};