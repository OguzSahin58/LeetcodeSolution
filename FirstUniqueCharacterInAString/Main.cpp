#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<char, int> charCount;

        for(char c : s) {
            charCount[c]++;
		}

        for(int i = 0; i < s.size(); ++i) {
            if(charCount[s[i]] == 1) return i;
		}

        return -1;
    }
};


int main() {
    Solution solution;



    string s = "loveleetcode";
    cout << solution.firstUniqChar(s) << endl; // Expected 2.00000

    return 0;
}