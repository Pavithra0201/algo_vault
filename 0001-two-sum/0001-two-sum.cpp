class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int t1,t2;
        for (int i=0;i<n;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                if (nums[i]+nums[j]==target)
                  {  t1=i;
                    t2=j;
                    break;}
            }
        }
        return {t1,t2};
       
        
    }
};