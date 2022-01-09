/*
350. Intersection of Two Arrays II
-Easy
*/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int j=0,i=0;
        vector<int>newv;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] == nums2[j]){
                newv.push_back(nums1[i]);
                i++, j++;
            }
            else if(nums1[i] > nums2[j]){
                j++;
            }
            else
                i++;
        }
        return newv;
    }
};
