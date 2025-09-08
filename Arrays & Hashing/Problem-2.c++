//Contains Duplicate

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //if(nums.size() == 0) return false;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;
    }
};


int main(void){
    vector<int> nums {};
    Solution s;
    bool result = s.hasDuplicate(nums);
    if(result){
        cout << "Duplicates" << endl;
    }else{
        cout << "All elements are distinct." << endl;
    }

}