class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        int curr_sum=0;
        int best_sum = nums[0]+nums[1]+nums[2];
        for (int i=0 ; i<nums.size()-2 ; i++){
            int left = i+1;
            int right = nums.size()-1;
            while(left < right){
                curr_sum = nums[i] + nums[left] + nums[right];
                
                if (abs(curr_sum - target)  <  abs(best_sum - target)){
                    best_sum = curr_sum;
                }
                if(curr_sum == target){
                    return target;
                }
                if(curr_sum < target){
                    left++;
                }
                else if(curr_sum > target){
                    right--;
                }
            }
        }
        return best_sum;
    }
};