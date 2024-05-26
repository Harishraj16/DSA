package Fourth;
import java.util.*;
public class oneSubsequencewithKsum {
	public static void main(String[] args) {
		int[] arr = {1,2,1};
		int n = 3;
		int k = 2;
		int sum = 0;
		List<Integer> ls = new ArrayList<>();
		print(0,ls,arr,sum,k);
	}

	private static boolean print(int i, List<Integer> ls, int[] arr, int sum, int k) {
		if(i==arr.length) {
			if(sum==k) {
				for(Integer val: ls) {
					System.out.print(val+" ");
				}
				return true;
			}
			return false;
		}
		ls.add(arr[i]);
		sum+=arr[i];
		if(print(i+1,ls,arr,sum,k)) return true;
		sum-=arr[i];
		ls.remove(ls.size()-1);
		if(print(i+1,ls,arr,sum,k)) return true;
		return false;
	}
}
