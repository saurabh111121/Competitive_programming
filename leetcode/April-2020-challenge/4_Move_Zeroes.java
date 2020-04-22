class Solution {
    public void moveZeroes(int[] nums) {
        int n = nums.length;
                     for(int i=0;i<n;i++){
                     for(int j=i+1;j<n;j++){
                            if(nums[i]==0){
                                int temp = nums[i];
                                nums[i]=nums[j];
                                nums[j]=temp;
                            }     
                       }
                   }    
        for(int j=0;j<n;j++){
           System.out.print(nums[j]);
        }
    }
}

// OR
class Solution {
    public void moveZeroes(int[] nums) {
        if(nums == null || nums.length ==0){
            return;
        }
        int length =0;
        for(int i = 0;i<nums.length;i++){
            if(nums[i] != 0){
                int temp = nums[i];
                nums[i] = nums[length];
                nums[length] = temp;
                length++;
            }

        }
    }
}

//OR


class Solution {
    public void moveZeroes(int[] nums) {
        if(nums==null || nums.length==0){
            return;
        }
        int left=0, i=0;
        int n=nums.length;
        while(i<nums.length){
            if(nums[i]!=0){
                swap(nums,left,i);
                left++;
            }
            i++;
        }
    }
    private void swap(int[] nums, int i, int j){
        int tmp=nums[i];
        nums[i]=nums[j];
        nums[j]=tmp;
    }
}
