#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        const char* SYMBOLS = "MDCLXVI";
        const char* pivot = SYMBOLS;
        int len = s.size();
        int sum = 0;

        for (int idx = 0; idx < len; ++idx) {
            if(s[idx] != *pivot)
            {
                switch (s[idx]) {
                    case 'M':
                        sum -= 1000;
                    case 'D':
                        sum -= 500;
                    case 'C':
                        sum -= 100;
                    case 'L':
                        sum -= 50;
                    case 'X':
                        sum -= 10;
                    case 'V':
                        sum -= 5;
                    case 'I':
                        sum -= 1;
                }
            }
            else
            {
                switch (s[idx]) {
                    case 'M':
                        sum += 1000;
                    case 'D':
                        sum += 500;
                    case 'C':
                        sum += 100;
                    case 'L':
                        sum += 50;
                    case 'X':
                        sum += 10;
                    case 'V':
                        sum += 5;
                    case 'I':
                        sum += 1;
                }

                if(s[idx] != 'I')
                    pivot++;
            }
        }

        return sum;
    }
};
