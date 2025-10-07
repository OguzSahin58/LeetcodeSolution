#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int result = numBottles;
        ;
        
        while (numBottles > 0 &&  numBottles / numExchange > 0 ) {
            result +=  (numBottles / numExchange);
            numBottles = numBottles - ((numBottles / numExchange) * numExchange)  + (numBottles / numExchange);
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
    int numBottles1 = 9, numExchange1 = 3;
    cout << solution.numWaterBottles(numBottles1, numExchange1) << endl; // Expected 2.00000

    return 0;
}