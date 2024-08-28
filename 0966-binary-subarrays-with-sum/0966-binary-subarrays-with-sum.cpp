class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        // esme presum vala concept lag sakta ha 

        int count=0;
        int presum=0;
        map<int,int>mpp;

        // mpp[0] =1 jarrori ha 
        mpp[0]=1;


        for(int i=0;i<nums.size();i++)
        {
            presum=presum+nums[i];

            int remove = presum-goal;

            count = count + mpp[remove];

            mpp[presum]= mpp[presum]+1;
        }
        return count ;
        
    }
};