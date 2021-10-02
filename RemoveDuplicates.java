import java.util.Scanner;

public class RemoveConsDupli {
	public static String remove(String s) {
		if(s.length() <= 1)
			return s;
//		String ans = "";
		if(s.charAt(0) == s.charAt(1))
			return remove(s.substring(1));
		
		return s.charAt(0) + remove(s.substring(1));
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		 System.out.println("enter your string");
		 String s = sc.nextLine();
		 
		 System.out.println(remove(s));

	}

}
