class Solution {
public:
void wiggleSort(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       vector<int> num(nums.size());
       int k=1;
       for(int i=1;i<nums.size();i+=2)
        num[i]=nums[nums.size()-k++];
        for(int i=0;i<nums.size();i+=2)
        num[i]=nums[nums.size()-k++];
        for(int i=0;i<nums.size();i++)
        nums[i]=num[i];
    }
};
