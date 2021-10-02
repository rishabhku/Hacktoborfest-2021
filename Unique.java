import java.util.Arrays;
import java.util.Scanner;

public class Unique {

	private static int unq(int arr[]){
        Arrays.sort(arr);
        for(int i = 0; i < arr.length ; i += 2){
            if(arr[i] != arr[i+1])
            return arr[i];
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter n");
        int n = sc.nextInt();
        int arr[] = new int[2*n+1];
        System.out.println("enter elements");
        for(int i = 0; i < (2*n+1); i++){
            arr[i] = sc.nextInt();
        }
       System.out.println(unq(arr));
        

        
    }

}
