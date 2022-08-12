int cmp(const void *d, const void *b){
    return *(const int *)d - *(const int *)b;
}

bool containsDuplicate(int* nums, int numsSize){
    int i, j;
    
    qsort (nums, numsSize, sizeof(int), cmp);
    
    for (i = 0; i < numsSize-1; i++) {
        if (nums[i] == nums[i+1]) {
            return true;
        }
    }
    
    return false;
}