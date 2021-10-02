import java.util.Scanner;

public class ReplaceChar {
	public static String replaceChar(String s,char c1,char c2) {
		if(s.length() <= 1 && s.charAt(0) != c1)
			return s;
		if(s.charAt(0) == c1)
			return c2 + replaceChar(s.substring(1),c1,c2);
		return s.charAt(0) + replaceChar(s.substring(1),c1,c2);
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("enter your string");
		String s = sc.nextLine();
		
		System.out.println("enter c1");
		char c1 = sc.next().charAt(0);
		
		System.out.println("enter c2");
		char c2 = sc.next().charAt(0);
		
		System.out.println(replaceChar(s,c1,c2));

	}

}
