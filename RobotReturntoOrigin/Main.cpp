#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {

        int right = 0, up = 0;
        for (size_t i = 0; i < moves.length(); ++i) {
            if(moves[i] == 'R') right++;
            else if(moves[i] == 'L') right--;
            else if(moves[i] == 'U') up++;
			else if (moves[i] == 'D') up--;
        }
        if (right == 0 && up == 0) return true;
		else return false;

    }
};


int main() {
    Solution solution;



    string moves = "LL"; 
    cout << solution.judgeCircle(moves) << endl; // Expected 2.00000

    return 0;
}