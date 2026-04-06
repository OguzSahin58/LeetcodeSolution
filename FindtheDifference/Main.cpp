#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
		unordered_map <char, int> charCount;
        for(char c : s) {
			charCount[c]++;
            }
        for (char c : t) {
            charCount[c]--;
        }
        for (const auto& pair : charCount) {
            if (pair.second != 0) {
                return pair.first;
            }
		}
		return '\0';
    }
};


int main() {
    Solution solution;



	string s = "abcd", t = "abcde";
    cout << solution.findTheDifference(s,t) << endl; // Expected 2.00000

    return 0;
}