class Solution {
public:
    void sortColors(vector<int>& nums) {
        int p0=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                swap(nums[p0],nums[i]);
                p0++;
            }  
        }
          int p1=p0;
          for(int i=p1;i<nums.size();i++){
              if(nums[i]==1){
                swap(nums[p1],nums[i]);
                p1++;
            }  
        }
    }
};