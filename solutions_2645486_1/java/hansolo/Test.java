package partb;

import java.io.BufferedWriter;
import java.io.FileInputStream;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.Date;
import java.util.Scanner;


public class Test {

	/**
	 * @param args
	 * @throws IOException 
	 */
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub

long beginTime = new Date().getTime();
		
		parse();
				
		System.out.println("" + (new Date().getTime() - beginTime) + " milliseconds.");
	}

	private static void parse() throws IOException {
		// TODO Auto-generated method stub
		FileInputStream inFile = new FileInputStream("partb//B-large.in");
		//FileOutputStream outFile = new FileOutputStream("A-small-practice.out");
		Scanner scanner = new Scanner(inFile);
		BufferedWriter writer = Files.newBufferedWriter(Paths.get("partb//B-large.out"), StandardCharsets.UTF_8);
	
		int expAmt = scanner.nextInt();
		for(int expNo=1; expNo<= expAmt; expNo++)
		{
			Experiment exp = new Experiment(scanner.nextInt(), scanner.nextInt(), scanner.nextInt());
			for(int vNo=0; vNo<exp.N; vNo++)
				exp.v[vNo] = scanner.nextInt();
			//System.out.println("read");
			//System.out.print("Case #"+ expNo +": "+ exp.Solve() +"\n");
			writer.write("Case #"+ expNo +": "+ exp.Solve() +"\n");
		}

		scanner.close();
		inFile.close();
		writer.close();	
	}

}
