import java.util.Scanner;
import java.util.Stack;

public class Main {

	public static void main(String[] args) {
		
		Scanner in = new Scanner(System.in);
		int num = in.nextInt();
		
		in.nextLine();

		Stack<Character> stack = new Stack<>();
		String tmp;
		
		for(int i=0; i<num; i++) { 
			StringBuilder sb = new StringBuilder();
			tmp = in.nextLine();
			for(int j=0; j<tmp.length(); j++) {
				if(tmp.charAt(j)==' ') {
					while(!stack.empty()) {
						sb.append(stack.pop());
					}
					sb.append(" ");
				}
				else {
					stack.push(tmp.charAt(j));
				}
			}
			while(!stack.empty()) {
				sb.append(stack.pop());
			}
			System.out.print(sb.toString());
			System.out.println();
		}	
		in.close();
	}
}
