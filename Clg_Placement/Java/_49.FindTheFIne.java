class Solution {
    
    public long totalFine( long n, long date, long car[], long fine[])
    {
        long amt = 0;
        if(date%2==0){
            for(int i=0;i<n;i++){
                if(car[i]%2!=0) amt += fine[i];
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(car[i]%2==0) amt += fine[i];
            }
        }
        return amt;
    }
}

//Another way:
class Solution {
    
    public long totalFine( long n, long date, long arr[], long fine[])
    {
        long amt = 0;
        boolean flag = true;
        if(date%2 != 0) flag = !flag;
        for(int i=0;i<n;i++){
            if(flag && arr[i]%2!=0) amt += fine[i];
            else if((!flag) && arr[i]%2==0) amt += fine[i];
        }
        return amt;
    }
}
