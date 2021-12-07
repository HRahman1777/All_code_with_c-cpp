/*
53. Maximum Subarray
- Easy
*/

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {

        int sum = 0, max = 0;

        if (nums.size() == 1)
            return nums[0];

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];

            if (sum < 0)
                sum = 0;

            if (sum > max)
                max = sum;
        }
        if (max <= 0)
            max = *max_element(nums.begin(), nums.end());

        return max;
    }
};