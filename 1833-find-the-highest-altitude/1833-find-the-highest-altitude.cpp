class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        vector<int> sumvec;

        int max=0;
        for (int i=0;i<gain.size();i++)
        {
            sum=sum+gain[i];
            sumvec.push_back(sum);
            if (max<sum)
                max=sum; 

        }

        return max;
        
    }
};