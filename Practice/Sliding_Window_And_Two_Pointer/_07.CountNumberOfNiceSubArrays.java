class Solution {
    public int sub(int[] nums,int k){
        int count = 0;
        int n = nums.length;
        int l=0,r=0;
        int odd = 0;
        while(r<n){
            if(k<0) return 0;
            if((nums[r]&1)==1) odd++;
            while(odd>k){
                if((nums[l]&1)==1) odd--;
                l+=1;
            }
            //if(odd == k) count+=(r-l+1);
            count+=(r-l+1);
            r+=1;
        }
        return count;
    }
    public int numberOfSubarrays(int[] nums, int k) {
        return sub(nums,k)-sub(nums,k-1);
    }
}


// class Solution {
//     public int numberOfSubarrays(int[] nums, int k) {
//         for (int i = 0; i < nums.length; i++) nums[i] = nums[i] & 1;
//         int count = 0;
//         for (int i = 0, j = 0, t = 0, oddCount = 0; j < nums.length; j++) {
//             if (nums[j] == 1) oddCount++;
//             if (oddCount < k) continue;
//             if (oddCount > k) {
//                 while (oddCount > k) {
//                     if (nums[i++] == 1) oddCount--;
//                 }
//                 t = i;
//             }
//             while (nums[t] == 0) t++;
//             count += (t - i + 1);
//         }
//         return count;
//     }
// }
