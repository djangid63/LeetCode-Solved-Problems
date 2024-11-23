class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);

        
        int leftPart = 1;
        for (int i = 0; i < n; i++) {
            res[i] = leftPart;
            leftPart *= nums[i];
        }

        int rightPart = 1;
        for (int i = n - 1; i >= 0; i--) {
            res[i] *= rightPart;
            rightPart *= nums[i];
        }

        return res;
    }
};
