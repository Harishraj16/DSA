class Solution {
    public int numberOfSubstrings(String s) {
        int n = s.length();
        int r=0;
        int count = 0;
        int hash[] = new int[3];
        for(int i=0;i<3;i++){
            hash[i]=-1;
        }
        while(r<n){
            hash[s.charAt(r)-'a']=r;
            count += (1 + Math.min(hash[0],Math.min(hash[1],hash[2])));
            r+=1;
        }
        return count;
    }
}


// Easy Implementation:
// class Solution {
//     public int numberOfSubstrings(String s) {
//         int n = s.length();
//         int left = 0, right = 0;
//         int a = 0, b = 0, c = 0;
//         int count = 0;
//         int[] freq = new int[3];
//         char[] arr = s.toCharArray();
//         while(right < n){
//             char ch = arr[right];
//             if(ch == 'a'){
//                 a++;
//             } else if(ch == 'b'){
//                 b++;
//             } else if(ch == 'c'){
//                 c++;
//             }
//             while(a > 0 && b > 0 && c > 0){
//                 char leftChar = arr[left];
//                 if(leftChar == 'a'){
//                     a--;
//                 } else if(leftChar == 'b'){
//                     b--;
//                 } else if(leftChar == 'c'){
//                     c--;
//                 }
//                 left++;
//             }
//             count += left;
//             right++;
//         }
//         return count;
//     }
// }
