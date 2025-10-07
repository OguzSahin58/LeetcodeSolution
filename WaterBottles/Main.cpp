#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int bottleDrunk = numBottles;
        int emptyBottles = numBottles;

        while (emptyBottles >= numExchange) {
            emptyBottles -= numExchange; // use empties for exchange
            numExchange++;               // cost of exchange increases
            bottleDrunk++;               // got one more bottle
            emptyBottles++;              // the new bottle becomes empty
        }
        return bottleDrunk;
    }

};


int main() {
    Solution solution;

    /* 
    int numBottles =9 , numExchange = 3;
    cout << solution.numWaterBottles(numBottles, numExchange) << endl; // Expected 2.00000
    */
    int numBottles1 = 9, numExchange1 = 3;
    cout << solution.maxBottlesDrunk(numBottles1, numExchange1) << endl; // Expected 2.00000

    return 0;
}