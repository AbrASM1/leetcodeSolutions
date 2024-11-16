class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int nums2_size=nums2.size(),nums1_size=nums1.size();
        if(nums1_size>nums2_size){
            return findMedianSortedArrays(nums2,nums1);
        }

        int total = nums2_size + nums1_size;
        int left= (total+1)/2;
        int low= 0, high=nums1_size;
        while (low <= high) {
            int mid1 = (low + high) >> 1; 
            int mid2 = left - mid1; 
            
            int l1 = INT_MIN, l2 = INT_MIN, r1 = INT_MAX, r2 = INT_MAX;
            
            
            if (mid1 < nums1_size)
                r1 = nums1[mid1];
            if (mid2 < nums2_size)
                r2 = nums2[mid2];
            if (mid1 - 1 >= 0)
                l1 = nums1[mid1 - 1];
            if (mid2 - 1 >= 0)
                l2 = nums2[mid2 - 1];
            
            if (l1 <= r2 && l2 <= r1) {
                
                if (total % 2 == 1)
                    return max(l1, l2);
                else
                    return ((double)(max(l1, l2) + min(r1, r2))) / 2.0;
            }
            else if (l1 > r2) {
                
                high = mid1 - 1;
            }
            else {
                
                low = mid1 + 1;
            }
        }
        
        return 0;
    }
};