#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0; 
        int right = height.size() - 1, left = 0; 
        
        while (right != left) {

            result = max(result,  (min(height[right], height[left]) * (right - left)));
      
            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }

        }
        return result; 
    }
};


int main() {
    Solution solution;

    /*
    int numBottles =9 , numExchange = 3;
    cout << solution.numWaterBottles(numBottles, numExchange) << endl; // Expected 2.00000
    */

    vector <int> height = { 1,1 }; 
    cout << solution.maxArea(height) << endl; // Expected 2.00000

    return 0;
}