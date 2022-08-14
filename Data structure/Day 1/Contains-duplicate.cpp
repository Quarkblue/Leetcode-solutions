#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {

        set<int> setNums(nums.begin(), nums.end());
        if (setNums.size() == nums.size()) {
            return false;
        }
        else {
            return true;
        }

    }
};



int main() {

    vector<int> l{1,2,3,4};

    Solution result;

    cout << result.containsDuplicate(l) << endl;

    return 0;
}