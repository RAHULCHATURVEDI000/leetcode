class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,pre=0;
       

          for(int i=0;i<nums.size();i++)
          sum+=nums[i];

            for(int i=0;i<=nums.size();i++)
            pre+=i;

          
   
        return pre-sum;
      
    }


   
};