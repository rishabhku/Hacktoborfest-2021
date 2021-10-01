import java.util.*;

public class PalindromicPattern {

    public static void main(String[] args)

    {

        System.out.print("Enter the number of rows : ");

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for(int i=1;i<=n;i++)

        {

            int space = n-i;

            for(int j=1;j<=space;j++)

            {

                System.out.print("  ");

            }

            for(int j=i;j>=1;j--)

                System.out.print(j + " ");

            for(int j=2;j<=i;j++)

                System.out.print(j + " ");

            System.out.println();

        }

    }

}

/* 

Enter the number of rows : 5

        1

      2 1 2

    3 2 1 2 3

  4 3 2 1 2 3 4

5 4 3 2 1 2 3 4 5

*/

