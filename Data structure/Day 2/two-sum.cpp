#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;
		
        for (int i = 0; i < nums.size(); i++) {
            for (int j = nums.size()-1; j > i; j--) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
            if (result.size() == 2)
            {
                break;
            }
        }
        return result;
    }
};



int main() {

    vector<int> nums{3,2,4};
    int target = 6;

    Solution result;
	
    cout << result.twoSum(nums, target)[0] << " " << result.twoSum(nums, target)[1] << endl;

    return 0;
}
