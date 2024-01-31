class GfG {
    int convertfive(int num) {
       String str = ""+num;
       StringBuilder strarr = new StringBuilder(str);
       for(int i=0;i<strarr.length();i++){
           if(strarr.charAt(i)=='0'){
               strarr.setCharAt(i,'5');
           }
       }
       int res = Integer.parseInt(strarr.toString());
       return res;
    }
}
