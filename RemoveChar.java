import java.util.Scanner;

public class RemoveChar {
	public static String removeChar(String str) {
		if(str.length() == 0)
			return str;
		String ans = "";
		if(str.charAt(0) != 'x') {
			ans = ans + str.charAt(0);
		}
		String smallAns = removeChar(str.substring(1));
		return ans + smallAns;
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("enter your string");
		String str = sc.nextLine();
		
		System.out.println(removeChar(str));
		
	}

}
