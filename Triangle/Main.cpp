#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int size = triangle.size();
        for (int i = size-2; i >= 0; i--)
        {
            for (int j = 0; j < triangle[i].size(); j++)
            {
                triangle[i][j] += min(triangle[i+1][j], (triangle[i+1][j + 1]));
            }
        }

        return triangle[0][0];
    }
};

int main() {
    Solution solution;


    vector<vector<int>> nums1 = {{2}, {3,4}, {5,6,7}, {4,1,8,3}};
    cout << solution.minimumTotal(nums1) << endl; // Expected 2.00000

    vector<vector<int>> nums2 = { {-1}, {2,3}, {1,-1,-3} };
    cout << solution.minimumTotal(nums2) << endl; // Expected 0.50000

    return 0;
}