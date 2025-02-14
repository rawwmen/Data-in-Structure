class Solution {
    public int[] twoSum(int[] nums, int target) {
        int f=0;
        int l=nums.length -1;
        while(f<l){
            int sum=nums[f]+nums[l];
            if(sum==target) {
                return new int[]{f+1,l+1};
            }else if(sum<=target){
                f++;
            }else{
                l--;
            } 

        }return new int[2];
    }
}