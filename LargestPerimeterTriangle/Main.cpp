#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        int size = nums.size();
        cout <<"this is the size: "<<  size<< endl;
        sort(nums.begin(), nums.end());
        // sort(nums.begin(), nums.end());
        
        int max = 0;
        for(int i = size - 1; i >= 2; i--)
        {
            if (nums[i - 2] + nums[i - 1] > nums[i]) {
                max = nums[i] + nums[i - 1] + nums[i - 2];
                return max; 
            }
        }
        return max; 
    }
};

int main() {
    Solution solution;


    vector<int> nums1 = { 2,1,2 };
    cout << solution.largestPerimeter(nums1) << endl; // Expected 2.00000

    vector<int> nums2 = { 1,2,1,10 };
    cout << solution.largestPerimeter(nums2) << endl; // Expected 0.50000

    return 0;
}