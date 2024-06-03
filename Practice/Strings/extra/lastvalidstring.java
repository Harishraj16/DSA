// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.*;
class HelloWorld {
    public static void main(String[] args) {
        String str = "ababcba";
        String last = "";
        while(str.length()>0){
            int a=0,b=0,c=0;
            String temp = "";
            for(int i=0;i<str.length();i++){
                if(str.charAt(i)=='a') a++;
                else if(str.charAt(i)=='b') b++;
                else if(str.charAt(i)=='c') c++;
                if((str.charAt(i)=='a' && a==1) || (str.charAt(i)=='b' && b==1) || (str.charAt(i)=='c' && c==1)) continue;
                else
                    temp+=str.charAt(i);
            }
            last = str;
            str = temp;
        }
        System.out.println(last);
    }
}
