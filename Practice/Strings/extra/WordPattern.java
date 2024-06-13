//290. Word Pattern

class Solution {
    public boolean wordPattern(String p, String s) {
        String[] str = s.split(" ");
        if(str.length != p.length()) return false;
        HashMap<Character,String> mp = new HashMap<>();
        for(int i=0;i<p.length();i++){
            char t = p.charAt(i);
            if(mp.containsKey(t)){
                if(!mp.get(t).equals(str[i])){
                    return false;
                }
            }
            else{
                if(mp.containsValue(str[i])) return false;
                mp.put(t,str[i]);
            }
        }
        return true;
    }
}
