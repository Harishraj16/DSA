class Solution
{
  public:
    
    int extractMaximum(string S) 
    { 
        int sum = -1;
        int i=0;
        while(i<S.size()){
            if(S[i]>=48 && S[i]<=57){
                int temp = 0;
                while(S[i]>=48 && S[i]<=57){
                    temp = temp*10 + S[i]-'0';
                    i++;
                }
                sum = max(sum,temp);
            }
            i++;
        }
        return sum;
    } 
};
