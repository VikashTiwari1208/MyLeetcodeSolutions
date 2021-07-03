class Solution {
public:
    void sortColors(vector<int>& nums) {
      int n=nums.size();  
      int zero=0;
       int one=0;
      int two=n-1;
      while(one<=two)
      {
        if(nums[one]==0)
        {
          swap(nums[zero],nums[one]);
          one++;
          zero++;
        }
        else if(nums[one]==1)
        {
          one++;
        }
        else
        {
          swap(nums[two],nums[one]);
          two--;
        }
      }
    }
};