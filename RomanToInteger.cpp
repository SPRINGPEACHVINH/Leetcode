#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> storage = 
        {
            {'I', 1}, 
            {'V', 5}, 
            {'X', 10}, 
            {'L', 50}, 
            {'C', 100}, 
            {'D', 500}, 
            {'M', 1000}
        };
        int n = s.size();
        int result = 0;
        for(int i = 0; i < n; i++) {
            if(storage.find(s[i]) != storage.end() && storage[s[i]] < storage[s[i+1]]) {
                result -= storage[s[i]];
            }
            else if(storage.find(s[i]) != storage.end() && storage[s[i]] >= storage[s[i+1]]) {
                result += storage[s[i]];
            }
        }
        return result;
    }
};