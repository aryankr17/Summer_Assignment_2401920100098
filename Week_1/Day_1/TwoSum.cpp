class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int st=0;
        int end=nums.size()-1;
        
        while(st<end){
            int sum = nums[st]+nums[end];
            if(sum==target){
                return new int[]{st,end};
            }
            else if(sum<target){
              st++;
            }
            else{
                end--;
            }
        }
        return new int[] {};
    }
};
