#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> word;

        for (const auto& c : s)
        {
            word[c]++;
        }
        for (const auto& c : t)
        {
            if(word.find(c) != word.end()) {
                word[c]--;
                if (word[c] < 0) return false;
            }
            else {
                return false;
			}
        }
        return true;
    }
};



int main() {
    Solution solution;



    string s = "anagram", t = "nagaram"; 
    cout << solution.isAnagram(s,t) << endl; // Expected 2.00000

    return 0;
}