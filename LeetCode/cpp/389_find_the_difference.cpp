#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int len = s.size();
        for (int idx = 0; idx < len; ++idx) {
            if (s.at(idx) != t.at(idx))
                return t.at(idx);
        }

        return t.at(t.size() - 1);
    }
};
