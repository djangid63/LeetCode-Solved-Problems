class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int num = 0, num1=0;

        num = nums[0]*nums[1]*nums[nums.size()-1];
        num1 =  nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        return max(num, num1);


    }
};