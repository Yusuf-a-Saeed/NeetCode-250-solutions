#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        while(true){
            bool flag = false;
            for(int i=0; i<nums.size()-1; i++){
                if(nums[i] > nums[i+1]){
                    swap(nums[i], nums[i+1]);
                    flag = true;
                }
            }
            if(!flag)
               break;
        }
    }
};

int main(void){
    vector<int> nums {1, 4, 1, 2};
    Solution s; s.sortColors(nums);
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
}