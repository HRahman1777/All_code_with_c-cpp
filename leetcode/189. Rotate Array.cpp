/*
189. Rotate Array
- Medium
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        k = k % nums.size();
        int temp = nums.size()-k;
        reverse(nums.begin(), nums.begin()+temp);
        reverse(nums.begin()+temp, nums.end());
        reverse(nums.begin(), nums.end());

    }
};
