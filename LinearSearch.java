package Array;
import java.util.*;

public class LinearSearch {

    public static int searchElement(int a[], int n, int x)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i] == x)
            {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

            System.out.print("Enter the number of elements : ");
            int n = sc.nextInt();

            int elements[] = new int[n];
            System.out.println("Enter the elements : ");

            for(int i=0;i<n;i++)
                elements[i] =  sc.nextInt();

            System.out.println("Enter the element to be searched : ");
                int x = sc.nextInt();

            int result = searchElement(elements,n,x);
            System.out.println(result);
    }
}
