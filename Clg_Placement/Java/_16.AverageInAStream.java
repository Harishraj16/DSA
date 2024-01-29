class Solution {
    float[] streamAvg(int[] arr, int n) {
        float[] result = new float[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            sum +=arr[i];
            result[i] = (float)sum/(i+1);
            
        }
        return result;
    }
}
