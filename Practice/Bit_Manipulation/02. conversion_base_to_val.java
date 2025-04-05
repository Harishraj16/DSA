// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class Main {
    public static void main(String[] args) {
        String str = "10101";
        int num = 21;
        String res = convertion(num,2);
        int val = convert(str,2);
        System.out.println(val);
        System.out.println(res);
    }
    public static int convert(String str,int base){
        int pow = 1;
        int res = 0; 
        for(int i=str.length()-1;i>=0;i--){
            res += (str.charAt(i)-'0')*pow;
            pow*=base;
        }
        return res;
    }
    public static String convertion(int num,int base){
        String res = "";
        while(num>0){
            res = (num%base)+res;
            num/=base;
        }
        return res;
    }
}
