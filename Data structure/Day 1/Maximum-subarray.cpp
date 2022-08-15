#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
    
        int max = INT_MIN;
        int latest_max = 0;
		
        for (int i = 0; i < nums.size(); i++)
        {
            latest_max += nums[i];
            if (latest_max > max) {
                max = latest_max;
            }
            if (latest_max < 0) {
                latest_max = 0;
            }
        }
        return max;
    }
};



int main() {
	

    return 0;
}