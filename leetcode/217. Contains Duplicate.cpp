/*
217. Contains Duplicate
- Easy
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        auto it = unique(nums.begin(), nums.end());
        if(distance(nums.begin(), it) == nums.size())
            return false;
        return true;
    }
};
