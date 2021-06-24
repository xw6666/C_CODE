//leetcode - 55. ��Ծ��Ϸ 
bool canJump(int* nums, int numsSize){
    int distance = 0;
    for(int i = 0;i < numsSize;i++)
    {
        if(i > distance)
        {
            return false;
        }
        distance = fmax(distance, i + nums[i]);
    }
    return true;
}
