#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    char findTheDifference(string s, string t) {
        int len = s.size();
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for (int idx = 0; idx < len; ++idx) {
            if (s.at(idx) != t.at(idx))
                return t.at(idx);
        }

        return t.at(t.size() - 1);
    }
};

class Solution2 {
public:
    char findTheDifference(string s, string t) {
        int len = s.size();
        for (int idx = 0; idx < len; ++idx) {
            t[idx+1] += t[idx] - s[idx];
        }

        return t[len];
    }
};
