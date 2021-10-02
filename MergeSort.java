import java.util.Scanner;

public class MergeSort {
	public static void mergeSort(int arr[],int sI,int eI) {
		if(sI >= eI)
			return ;
		int mid = (sI+eI)/2;
		mergeSort(arr,sI,mid);
		mergeSort(arr,mid+1,eI);
		merge(arr,sI,eI);
		
	}
	public static void merge(int arr[],int sI,int eI) {
		int mid = (sI+eI)/2;
		int ans[] = new int[eI-sI+1];
		int i = sI;
		int j = mid+1;
		int k = 0;
		while(i <= mid && j <= eI) {
			if(arr[i] < arr[j]) {
				ans[k] = arr[i];
				i++;
				k++;
			}else {
				ans[k] = arr[j];
				k++;
				j++;
			}
		}
		while(i <= mid) {
			ans[k] = arr[i];
			i++;
			k++;
		}
		while(j <= eI) {
			ans[k] = arr[j];
			k++;
			j++;
		}
		for(int x = 0 ; x < ans.length;x++) {
			arr[x + sI] = ans[x];
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		System.out.println("enter size of array");
		int n = sc.nextInt();
		
		int arr[] = new int[n];
		System.out.println("enter elements");
		for(int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
		}
		mergeSort(arr,0,n-1);
		for(int i : arr) {
			System.out.print(i+" ");
		}
	}

}
