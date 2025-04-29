#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
    public:
        int findGCD(vector<int>& nums) {
            sort(nums.begin(), nums.end());

            return gcd(nums[0], nums[nums.size() - 1]);
        }
    private:
        int gcd(int a, int b) {
            while(b) {
                a %= b;
                swap(a,b);
            }

            return a;
        }
    };

int main() {
    Solution sol;
    vector<int> arr = {2, 4, 6, 9};
    int result = sol.findGCD(arr);

    cout << result << endl;
}