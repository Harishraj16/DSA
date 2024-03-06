class Solution {
    boolean check(int num){
        while(num>0){
            int temp = num%10;
            if(temp>5 || temp<1) return false;
            num /= 10;
        }
        return true;
    }
    int countNumbers(int n) {
        int count = 0;
        for(int i=1;i<=n;i++){
            if(check(i)==true) count++;
        }
        return count;
    }
}
