class Solution {
    boolean fascinating(long n) {
        String result = ""+n+(n*2)+(n*3);
        String target = "123456789";
        char[] chararr = result.toCharArray();
        Arrays.sort(chararr);
        result = new String(chararr);
        return result.equals(target);
    }
}
