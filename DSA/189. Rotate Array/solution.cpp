// Author : Rashedul Islam
// Date   : 2025-02-26

/**********************************************************************************
 *
 * Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
 *
 * For this problem, the following formula is applied (current_index + steps) modulo length of array
 * 
 * time complexity O(n)
 * space complexity O(n)
 **********************************************************************************/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int> v(len);
        for(int i=0;i<len;i++){
           v[(i+k)%len] = nums[i];
        }
        for(int i=0;i<len;i++){
           nums[i] = v[i];
        }
        
    }
};