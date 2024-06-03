import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            String s = scanner.next();
            int j=0,n=s.length();
            int count = 0;
            while(j<n){
                if(s.charAt(j) == 'a' || s.charAt(j) == 'e' || s.charAt(j) == 'i' || s.charAt(j) == 'o' || s.charAt(j) == 'u' ){
                    count++;
                }
                else{
                    count = 0;
                }
                if(count>=3){
                    System.out.println("Happy");
                    break;
                }
                j++;
            }
            if(count<3)System.out.println("Sad");
        }
    }
}
