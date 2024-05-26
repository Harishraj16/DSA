package Fifth;

import java.util.ArrayList;
import java.util.Scanner;

public class combinationSum {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++) arr[i] = in.nextInt();
        System.out.print("Enter Target Sum: ");
        int sum = in.nextInt();
        ArrayList<Integer> ls = new ArrayList<>();
        combination(0,arr,sum,ls);
    }
    public static void combination(int i,int[] arr,int sum,ArrayList<Integer>ls){
        if(i==arr.length){
            if(sum==0){
                System.out.println(ls.toString());
            }
            return;
        }
        if(sum>=arr[i]){
            ls.add(arr[i]);
            combination(i,arr,sum-arr[i],ls);
            ls.remove(ls.size()-1);
        }
        combination(i+1,arr,sum,ls);
    }
}
