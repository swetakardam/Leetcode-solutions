class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
      
        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }
        sort(arr.begin(), arr.end());
        
        for (int i = 1; i < n; i++) {
            
            if (arr[i].first == arr[i - 1].first && abs(arr[i].second - arr[i - 1].second) <= k) {
                return true;
            }
        }
        
        return false;
    }
};
