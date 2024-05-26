package Fourth;

import java.util.ArrayList;

public class SubsequenceSumK {
//	public static void main(String[] args) {
//		int[] arr = {1,2,1};
//		int k = 2;
//		ArrayList<Integer> ls = new ArrayList<>();
//		int sum = 0;
//		print(0,ls,arr,sum,k);
//	}
//
//	private static void print(int i, ArrayList<Integer> ls, int[] arr, int sum, int k) {
//		if(i==arr.length ) {
//			if(sum == k) {
//				for(Integer val: ls) {
//					System.out.print(val+" ");
//				}
//				System.out.println();
//			}
//			return;
//		}
//		ls.add(arr[i]);
//		sum+=arr[i];
//		print(i+1,ls,arr,sum,k);
//		ls.remove(ls.size()-1);
//		sum-=arr[i];
//		print(i+1,ls,arr,sum,k);
//	}

	public static void main(String[] args) {
		int[] arr = {1,2,1};
		int k = 2;
		int sum = 0;
		ArrayList<Integer> ls = new ArrayList<>();
		subsequence(0,arr,k,sum,ls);
	}

	public static void subsequence(int i,int[] arr,int k,int sum, ArrayList<Integer>ls) {
		if(i==arr.length){
			if(k==sum){
				for(Integer val:ls) System.out.print(val+" ");
				System.out.println();
			}
			return;
		}

		ls.add(arr[i]);
		sum+=arr[i];
		subsequence(i+1,arr,k,sum,ls);
		ls.remove(ls.size()-1);
		sum-=arr[i];
		subsequence(i+1,arr,k,sum,ls);
	}
}
