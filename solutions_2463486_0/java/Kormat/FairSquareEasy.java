import java.io.File;
import java.io.IOException;
import java.util.List;
import java.util.Scanner;

import com.google.common.base.Charsets;
import com.google.common.collect.Lists;
import com.google.common.io.Files;

/*
 * using Google Guava (http://code.google.com/p/guava-libraries/)
 */

public class FairSquareEasy {
	public static void main(String[] args) throws IOException {
		String content = Files.toString(new File(args[0]), Charsets.UTF_8);
		Scanner scanner = new Scanner(content);
		
		StringBuilder output = new StringBuilder();
		int testCases = scanner.nextInt();
		
		List<Long> fairSquares = precomputeFairSquares(1000);
		
		for(int i=1; i<=testCases; i++) {
			String solution = "Case #"+i+": "+solve(scanner, fairSquares)+"\n";
			System.err.print(solution);
			output.append(solution);
		}
		Files.write(output.toString(), new File("out.out"), Charsets.UTF_8);
	}

	private static List<Long> precomputeFairSquares(long max) {
		List<Long> fss = Lists.newArrayList();
		
		long maxToCompute = (long)Math.floor(Math.sqrt(max));
		for (long i=1; i<=maxToCompute; i++) {
			if (isPalindrome(i) && isPalindrome(i*i)) fss.add(i*i);
		}
		return fss;
	}
	private static boolean isPalindrome(long num) {
		// easy version
		return num<10 || num%11==0;
	}

	private static String solve(Scanner scanner, List<Long> fss) {
		long a = scanner.nextLong();
		long b = scanner.nextLong();
		long result = 0;
		for (long fs:fss) {
			if (fs >= a && fs<=b) result++;
		}
		return "" + result;
	}
}
