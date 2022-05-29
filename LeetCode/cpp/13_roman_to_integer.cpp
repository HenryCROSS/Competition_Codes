#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int romanToInt(string s)
    {
        // const char* SYMBOLS = "MDCLXVI";
        const char *SYMBOLS = "VXLCDM";
        const char *pivot = SYMBOLS;
        int len = s.size();
        int tmp = 0;
        int ans = 0;
        int idx = len - 1;

        while (*pivot && *pivot != s[idx])
        {
            switch (s[idx])
            {
            case 'M':
                pivot+=5;
                break;
            case 'D':
                pivot+=4;
                break;
            case 'C':
                pivot+=3;
                break;
            case 'L':
                pivot+=2;
                break;
            case 'X':
                pivot+=1;
                break;
            case 'V':
                break;
            default:
                idx--;
                break;
            }
        }

        ans += len - idx;

        for (idx = len - 1; idx >= 0; --idx)
        {
            if (*pivot == s[idx])
            {
                tmp *= -1;
                ++pivot;
            }

            switch (s[idx])
            {
            case 'M':
                tmp += 1000;
                break;
            case 'D':
                tmp += 500;
                break;
            case 'C':
                tmp += 100;
                break;
            case 'L':
                tmp += 50;
                break;
            case 'X':
                tmp += 10;
                break;
            case 'V':
                tmp += 5;
                break;
            case 'I':
                tmp += 1;
                break;
            }

            if (*pivot == s[idx])
            {
                ans += tmp;
                tmp = 0;
            }
        }

        return ans;
    }
};
