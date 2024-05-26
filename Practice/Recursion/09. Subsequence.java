package Fourth;
import java.util.*;
public class Subsequence {

//	public static void main(String[] args) {
//		int[] arr = {1,2,3};
//		ArrayList<Integer> ls = new ArrayList<>();
//		print(0,ls,arr,arr.length);
//	}
//
//	private static void print(int i, ArrayList<Integer> ls, int[] arr, int n) {
//		if(i==n) {
//			if(ls.size() == 0) {
//				System.out.println("{}");
//			}
//			else {
//				for(Integer val: ls) {
//					System.out.print(val+" ");
//				}
//			}
//			System.out.println();
//			return;
//		}
//		ls.add(arr[i]);
//		print(i+1,ls,arr,n);
//		ls.remove(ls.size()-1);
//		print(i+1,ls,arr,n);
//	}

	public static void subset(int i,int[] arr, ArrayList<Integer>ls){
		if(i==arr.length){
			for(Integer num: ls) System.out.print(num+" ");
			System.out.println();
			return;
		}
		ls.add(arr[i]);
		subset(i+1,arr,ls);
		ls.remove(ls.size()-1);
		subset(i+1,arr,ls);
	}
	public static void main(String[] args) {
		int[] arr = {1,2,1};
		ArrayList<Integer> ls = new ArrayList<>();
		subset(0,arr,ls);
	}
}
