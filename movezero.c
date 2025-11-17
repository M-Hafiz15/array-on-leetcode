void moveZeroes(int* nums, int numsSize){
    int k = 0;  // position for next non-zero
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != 0){
            // swap nums[k] and nums[i]
            int temp = nums[k];
            nums[k] = nums[i];
            nums[i] = temp;
            k++;
        }
    }
}
