import java.util.Scanner;

public class Main {
	
	private static int gcd(int a, int b) {
		if(b == 0) {
			return a;
		}
		else {
			return gcd(b, a % b);
		}
	}
	
	private static int lcm(int a, int b) {
		return (a * b) / gcd(a, b);
	}

	public static void main(String[] args) {
		
		Scanner in = new Scanner(System.in);
		int a = in.nextInt();
		int b = in.nextInt();
		
		int gcdresult = gcd(a,b);
		int lcmresult = lcm(a,b);
		
		System.out.println(gcdresult);
		System.out.print(lcmresult);
		
	
		in.close();
	}
}
