class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int ans = INT_MIN;
        int curr = 0;
        for(int x:arr){
            curr+=x;
            ans = max(ans,curr);
            if(curr<0)curr = 0;
        }
        return ans;
    }
};