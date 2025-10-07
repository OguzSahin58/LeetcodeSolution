#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int size = nums.size();

        for (int i = size - 1; i > 0; i--) {
            for (int k = 0; k < size - 1; k++)
            {
                nums[k] = (nums[k] + nums[k + 1]) % 10; 
            }
        }
        return nums[0];

        
    }
};



int main() {
    Solution solution;


    vector<int> nums = { 1,2,3,4,5 }; 
    cout << solution.triangularSum(nums) << endl; // Expected 2.00000

    vector<int> nums2 = { 5 };
    cout << solution.triangularSum(nums2) << endl; // Expected 2.00000

    return 0;
}