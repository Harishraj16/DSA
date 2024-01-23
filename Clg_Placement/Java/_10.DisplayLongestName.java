class GFG {
    String longest(String names[], int n) {
        int ind = -1;
        int longest = -1;
        for(int i=0;i<n;i++){
            int length = names[i].length();
            if(length>longest){
                longest = length;
                ind = i;
            }
        }
        return names[ind];
    }
}
