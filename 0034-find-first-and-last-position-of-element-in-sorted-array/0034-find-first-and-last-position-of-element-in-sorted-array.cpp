int firstoc(vector<int>nums, int x){
    int n=nums.size();
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==x){
            first=mid;
            high=mid-1;
        }else if(nums[mid]<x){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return first;
}

int lastoc(vector<int>nums, int x){
    int n=nums.size();
    int low=0;
    int high=n-1;
    int last=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==x){
            last=mid;
            low=mid+1;
        }else if(nums[mid]<x){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return last;
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int first=firstoc(nums,target);
        int last=lastoc(nums,target);
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};