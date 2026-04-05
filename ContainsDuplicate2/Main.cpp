#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> seen; 


        for (int i = 0; i < nums.size(); i++)
        {
            if (seen.count(nums[i]) && i - seen[nums[i]]<= k )
            {
                return true;
            }
            else
            {
				seen[nums[i]] = i;
            }
        }
		return false;

    }
};


int main() {
    Solution solution;



    vector <int> nums = { 1,2,3,1,2,3 };
	int k = 2;
    cout << solution.containsNearbyDuplicate(nums, k) << endl; 

    return 0;
}