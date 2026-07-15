class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        //removing 5% 
        int remove=n*5/100;
        double sum=0;
        //sum of remaining array
        for(int i = remove; i < n - remove; i++){
            sum += arr[i];
        }
        //mean
        return sum / (n - 2 * remove);
    }
};