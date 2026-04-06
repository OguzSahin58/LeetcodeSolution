#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int left = 0, max_length = 0;
        for (int i = 0; i < s.size(); i++)
        {
            while (map.find(s[i]) != map.end())
            {
                map.erase(s[left]);
                left++;
            }
            map[s[i]] = i;
            max_length = max(max_length, i - left + 1);
        }


        return max_length;
    }
};

int main() {
    Solution solution;



    string s = "dvdf";
    cout << solution.lengthOfLongestSubstring(s) << endl; // Expected 2.00000

    return 0;
}