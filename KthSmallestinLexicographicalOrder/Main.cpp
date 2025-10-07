#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;



class Solution {
public:
    int findKthNumber(int n, int k) {
        int result = 0;
        if (n == 1 or k == 1) {
            return 1;
        }
        else if (n < 10) {
            vector<int> Trie;
            for (int i = 1; i <= n; i++) {
                Trie.push_back(i);
            }



            return result = Trie[k - 1];

        }
        else if (n == 10) {
            vector<int> Trie;
            for (int i = 1; i <= n; i++) {
                Trie.push_back(i);
            }



            return result = Trie[k - 1] - 1;
        }
        else {
            vector<int> Trie;

            for (int i = n; i > 0; i--)
            {
                int next_Ite, mod_kalan;
                returnModules(i, next_Ite, mod_kalan);

                if (mod_kalan > 0) {
                    i -= next_Ite * 1;
                    Trie.push_back(mod_kalan);
                    for (int k = mod_kalan * 10; k <= mod_kalan * 10 + next_Ite; k++) {
                        Trie.push_back(k);
                    }
                }
                else {
                    Trie.push_back(next_Ite);
                }
            }

            for (int x : Trie) {
                cout << x << " ";
            }
            cout << endl;

            result = Trie[k - 1];

        }

        return result;


    }
    void returnModules(int n, int& next_Ite, int& mod_kalan) {

        next_Ite = n % 10;
        mod_kalan = n / 10;

    }
};


int main() {
    Solution solution;


    int n1 = 101, k1=  2; 
    cout << solution.findKthNumber(n1,k1) << endl; // Expected 2.00000


    return 0;
}