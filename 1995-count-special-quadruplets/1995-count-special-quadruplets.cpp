class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int num = 0, n = nums.size();
        for(short i=0;i<n-3;i++){
            for(short j=i+1;j < n-2;j++){
                for(short k = j+1; k < n-1;k++){
                    for(short s = k+1; s<n;s++)
                    num += (nums[i]+nums[j]+nums[k]==nums[s])?1:0;
                }
            }
        }
        return num;
    }
};