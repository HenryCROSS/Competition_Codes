#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int romanToInt(string s) {
            // const char* SYMBOLS = "MDCLXVI";
            const char* SYMBOLS = "IVXLCDM";
            const char* pivot = SYMBOLS;
            int len = s.size();
            int tmp = 0;
            int ans = 0;


            for (int idx = len - 1; idx >= 0; --idx) {
                if(*pivot == 'I' && s[idx] == 'I')
                    ++ans;
                else
                {
                    if(*pivot == s[idx])
                    {
                        tmp *= -1;
                        ++pivot;
                    }

                    switch (s[idx]) {
                        case 'M':
                            tmp += 1000;
                        case 'D':
                            tmp += 500;
                        case 'C':
                            tmp += 100;
                        case 'L':
                            tmp += 50;
                        case 'X':
                            tmp += 10;
                        case 'V':
                            tmp += 5;
                        case 'I':
                            tmp += 1;
                    }

                    if(*pivot == s[idx])
                    {
                        ans += tmp;
                        tmp = 0;
                    }
                }

            }

            return ans;
        }
};
