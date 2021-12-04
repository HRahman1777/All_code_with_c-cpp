/*
26. Remove Duplicates from Sorted Array
- Easy
*/
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int t, k = 0, siz = nums.size();
        if (siz <= 1)
            return siz;
        else
        {
            int maxv = nums[siz - 1] + 1;
            for (int i = 1; i < siz; i++)
            {
                if (nums[i] == nums[i - 1] || t == nums[i])
                {
                    t = nums[i];
                    nums[i] = maxv;
                    k++;
                }
            }
            sort(nums.begin(), nums.end());
        }
        return siz - k;
    }
};
