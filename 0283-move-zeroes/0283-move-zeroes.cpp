class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                ans.push_back(nums[i]);
            }
        }
        int rem= n-ans.size();
        for(int i=0;i<rem;i++){
            ans.push_back(0);
        }
        nums=ans;
    }
};