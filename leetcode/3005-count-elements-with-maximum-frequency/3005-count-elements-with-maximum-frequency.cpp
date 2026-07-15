class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxfreq=0;
        for(auto it:mp){
            maxfreq=max(maxfreq,it.second);
        }
        int ans=0;
        for(auto it:mp){
            if(it.second==maxfreq){
                ans +=it.second;
            }
        }
        return ans;
    }
};