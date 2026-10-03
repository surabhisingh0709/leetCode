class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        /*int k=-1;
        for(int i = 0; i<n ; i++)
        {
            if(nums[i]!=0)
            {
                k++;
                nums[k]=nums[i];
            }
        }
        for(int i =k+1 ; i<n; i++)
        {
            nums[i]=0;
        }
        
    }*/
    /*vector<int> temp;
    int i ;
    for( i =0 ; i<n ; i++)
    {
        if(nums[i]!=0)
        {
            temp.push_back(nums[i]);
        }

    }
    for(i=0; i<temp.size(); i++)
    {
         nums[i]=temp[i];
    }
    for(i=temp.size(); i<n ; i++)
    {
        nums[i]=0;
    }*/

    int cur=0;
    int zeroPos=0;

    while(cur<n)
    {
        if(nums[cur]!=0) swap(nums[zeroPos++],nums[cur]);
        cur++;
    }
}
};