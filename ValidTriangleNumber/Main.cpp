#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    double triangleNumber(vector<int>& points) {
        int n = points.size();
        int count = 0;

        sort(points.begin(), points.end());

        for (int k = n - 1; k >= 2; k--)
        {
            int i = 0, j = k - 1;

            while (i < j)
            {
                if (points[i] + points[j] > points[k])
                {
                    count += (j - i);
                    j--;
                }
                else {
                    i++;
                }
            }
        }

        return count;
        ;
    }
};

int main() {
    Solution solution;


    vector<int> nums1 = { 2,2,3,4 };
    cout << solution.triangleNumber(nums1) << endl; // Expected 2.00000

    vector<int> nums2 = { 4,2,3,4 };
    cout << solution.triangleNumber(nums2) << endl; // Expected 0.50000

    return 0;
}
