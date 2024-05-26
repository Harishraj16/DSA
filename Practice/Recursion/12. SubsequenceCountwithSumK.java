package Fourth;
import java.util.*;
public class countSubsequenceWhoseSumIsK {
//	public static void main(String[] args) {
//		int[] arr = {1,2,1};
//		int sum = 0;
//		int k = 2;
//		int count = 0;
//		count = print(0,arr,sum,k,count);
//		System.out.print("count: "+count);
//	}
//
//	private static int print(int i, int[] arr, int sum, int k, int count) {
//		if(i==arr.length) {
//			if(sum==k) {
//				return 1;
//			}
//			return 0;
//		}
//		int l=0,r=0;
//		sum+=arr[i];
//		l+=print(i+1,arr,sum,k,count);
//		sum-=arr[i];
//		r+=print(i+1,arr,sum,k,count);
//		return l+r;
//	}
	public static int count = 0;
	public static void main(String[] args) {
		int[] arr = {1,2,1};
		int k=2;
		counting(0,arr,k);
		System.out.println("Count: "+count);
	}

	public static void counting(int i,int[] arr,int sum){
		if(i==arr.length){
			if(sum==0){
				count+=1;
			}
			return;
		}
//		if(sum>=arr[i]){
//			sum-=arr[i];
//			counting(i+1,arr,sum);
//			sum+=arr[i];
//			counting(i+1,arr,sum);
//		}
		counting(i+1,arr,sum-arr[i]);
		counting(i+1,arr,sum+arr[i]);
	}
}
