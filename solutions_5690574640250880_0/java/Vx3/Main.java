import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;


public class Main {

	/**
	 * @param args
	 * @throws IOException 
	 */
	public static void main(String[] args) throws IOException {
		FileReader f = new FileReader("E://workspace//mines//resource//in");
		BufferedReader br = new BufferedReader(f);
		// number of input
		int N = Integer.parseInt(br.readLine());
		// row
		String[] row = new String[N];

		String sCurrentLine;
		int i = 0;
		while ((sCurrentLine = br.readLine()) != null) {
			row[i] = sCurrentLine;
			i++;
		}
		
		for (i = 0; i < N ; i++) {
			Jeu jeu = new Jeu(row[i]);
			String result = jeu.compute();
			System.out.println("Case #" + (i + 1) + ": " + System.lineSeparator() + result);
			
		}
		

	}

}


