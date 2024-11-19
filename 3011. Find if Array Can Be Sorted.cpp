class Solution {
public:
    int countSetBits(int n) {
    return __builtin_popcount(n);
    }
  
    bool canSortArray(vector<int>& nums) {
        int nums_size=nums.size();
        if(nums_size<2) return true;
        int n = sizeof(nums) / sizeof(nums[0]);
        int temp=0,i=1;

        while(!is_sorted(nums.begin(), nums.end())){
        
           bool swapped = false;

            for (int i = 1; i < nums_size; ++i) {
                if (nums[i - 1] > nums[i]) {
                    if (countSetBits(nums[i - 1]) != countSetBits(nums[i])) {
                        return false;
                    }
                    
                    swap(nums[i - 1], nums[i]);
                    swapped = true;
                }

        }

            if (!swapped) {
                break;
            }
    }
    return true;
    
    }
};