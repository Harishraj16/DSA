class Solution
{
    String reverseWithSpacesIntact(String S)
    {
        char[] arr = S.toCharArray();
        int n = S.length();
        int i=0,j=n-1;
        while(i<j){
            if(S.charAt(i)==' '){
                i++;
                continue;
            }
            if(S.charAt(j)==' '){
                j--;
                continue;
            }
            char temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            
            i++;
            j--;
        }
        return new String(arr);
    }
}
