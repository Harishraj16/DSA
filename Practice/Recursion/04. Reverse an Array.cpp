// vector<int> reverseArray(int n, vector<int> &nums)
// {
//     reverse(nums.begin(),nums.end());
//     return nums;

// }


package Second;

public class ReverseArray {

	//USING TWO POINTER
//	public static void main(String[] args) {
//		int arr[] = {1,2,3,4,5};
//		for(int val:arr) System.out.print(val+" ");
//		System.out.println();
//		reverse(arr,0,arr.length-1);
//		for(int val:arr) System.out.print(val+" ");
//	}
//
//	private static void reverse(int[] arr, int i, int j) {
//		if(i>=j) return;
//		swap(arr,i,j);
//		reverse(arr,i+1,j-1);
//	}
//
//	private static void swap(int[] arr,int i, int j) {
//		int temp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = temp;
//	}
	
	//USING SINGLE POINTER
	public static void main(String[] args) {
		int arr[] = {1,2,3,4,5};
		for(int val:arr) System.out.print(val+" ");
		System.out.println();
		reverse(arr,0);
		for(int val:arr) System.out.print(val+" ");
	}

	private static void reverse(int[] arr, int i) {
		if(i>= arr.length/2) return;
		swap(arr,i,arr.length -i-1);
		reverse(arr,i+1);
	}

	private static void swap(int[] arr,int i, int j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

}

