class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        best_sum = nums[0] + nums[1] + nums[2]
        for i in range(len(nums) -2):
            l = i+1
            r = len(nums) -1

            while (l < r):
                curr_sum = nums[i] + nums[l] + nums[r]
                if (abs(curr_sum - target) < abs(best_sum - target)):
                    best_sum = curr_sum

                if curr_sum == target:
                    return target
                if curr_sum < target:
                    l = l+1
                elif  curr_sum > target: 
                    r = r-1
            
        return best_sum

        