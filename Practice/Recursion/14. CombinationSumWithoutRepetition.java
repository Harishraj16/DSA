package Fifth;

import java.lang.reflect.Array;
import java.util.*;

public class combinationSumWithoutRepetiton {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++) arr[i] = in.nextInt();
        System.out.print("Enter Target Sum: ");
        int sum = in.nextInt();
        ArrayList<Integer> ls = new ArrayList<>();
        //HashSet<ArrayList<Integer>> res = new HashSet<>();
        ArrayList<ArrayList<Integer>> res = new ArrayList<>();
        Arrays.sort(arr);
        combination(0,arr,sum,ls,res);
        for(ArrayList<Integer> val: res){
            System.out.println(val+" ");
        }
    }
//    Brute Force
//    public static void combination(int i,int[] arr,int sum,ArrayList<Integer>ls,HashSet<ArrayList<Integer>> res){
//        if(i == arr.length){
//            if(sum==0) res.add(new ArrayList<>(ls));
//            return;
//        }
//        if(sum>=arr[i]){
//            ls.add(arr[i]);
//            combination(i+1,arr,sum-arr[i],ls,res);
//            ls.remove(ls.size()-1);
//        }
//        combination(i+1,arr,sum,ls,res);
//    }

    public static void combination(int ind, int[] arr, int sum, ArrayList<Integer>ls,ArrayList<ArrayList<Integer>>res){
        if(sum==0){
            res.add(new ArrayList<>(ls));
            return;
        }
        for(int i = ind;i<arr.length;i++){
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(sum<arr[i]) break;
            ls.add(arr[i]);
            combination(ind+1,arr,sum-arr[i],ls,res);
            ls.remove(ls.size()-1);
        }
    }
}
