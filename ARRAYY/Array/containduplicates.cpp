#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Approach 1: Brute Force
    // Time Complexity: O(N^2)
    // Space Complexity: O(1)
  
    bool containsDuplicateBrute(vector<int>& nums) {

        for(int i = 0; i < nums.size(); i++) {

            for(int j = i + 1; j < nums.size(); j++) {

                if(nums[i] == nums[j]) {
                    return true;
                }
            }
        }

        return false;
    }

  
    // Approach 2: Sorting
    // Time Complexity: O(N log N)
    // Space Complexity: O(1) (ignoring sorting space)
   
    bool containsDuplicateSort(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] == nums[i - 1]) {
                return true;
            }
        }

        return false;
    }

    
    // Approach 3: Hashing (Optimal)
    // Time Complexity: O(N)
    // Space Complexity: O(N)
   
    bool containsDuplicateHash(vector<int>& nums) {

        unordered_set<int> st;

        for(int num : nums) {

            if(st.find(num) != st.end()) {
                return true;
            }

            st.insert(num);
        }

        return false;
    }
};

int main() {

    vector<int> nums = {1, 2, 3, 4, 1};

    Solution obj;

    cout << "Brute Force: "
         << obj.containsDuplicateBrute(nums) << endl;

    cout << "Sorting: "
         << obj.containsDuplicateSort(nums) << endl;

    cout << "Hashing: "
         << obj.containsDuplicateHash(nums) << endl;

    return 0;
}