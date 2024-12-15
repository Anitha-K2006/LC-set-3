int majorityElement(int* nums, int numsSize) {
    int max=nums[0];
    int c=1;
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i]==max)
        {
            c++;
        }
        else 
        {
            c--;
            if(c==0)
            {
                max=nums[i];
                c=1;
            }
        }
    }
    return max;
}
    
