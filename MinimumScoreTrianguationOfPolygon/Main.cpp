#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


class Solution {
public:
    int minScoreTriangulation(vector<int>& values) {
        int size = values.size();

        if (size == 3);
        {
            return values[0] * values[1] * values[2];
        }
    }
};

int main() {
    Solution solution;


    vector<int> nums1 = { 1,2,3 };
    cout << solution.minScoreTriangulation(nums1) << endl; // Expected 2.00000

    vector<int> nums2 = { 1,2,1,10 };
    cout << solution.minScoreTriangulation(nums2) << endl; // Expected 0.50000

    return 0;
}