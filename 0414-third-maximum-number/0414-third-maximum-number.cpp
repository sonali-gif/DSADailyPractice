class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        long long fm=LLONG_MIN;
        long long sm=LLONG_MIN;
        long long tm=LLONG_MIN;
    
        for(int i=0;i<n;i++){
            if(nums[i]==fm||nums[i] == sm || nums[i] == tm){
            continue;
        }
            if(nums[i]>fm){
                tm=sm;
                sm=fm;
                fm=nums[i];
            }else if(nums[i]>sm && nums[i]<fm){
                tm=sm;
                sm=nums[i];
            }else if(nums[i]>tm && nums[i]<sm)
            tm=nums[i];
        }
        if(tm==LLONG_MIN){
            return fm;
        }else{
            return tm;
        }
        
    }
};