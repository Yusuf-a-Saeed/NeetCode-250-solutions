// Concatenation of Array
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n*2);
        for(int i=0; i<n; i++){
            ans[i] = nums[i];
            ans[n+i] = nums[i];
        }
        return ans;
    }
};


int main(void){
    vector<int> nums {1, 4, 1, 2};
    Solution s;
    vector<int> ans = s.getConcatenation(nums);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

}