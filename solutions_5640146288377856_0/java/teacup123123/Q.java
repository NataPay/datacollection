package codeJam3;

import java.io.FileWriter;
import java.io.IOException;

public abstract class Q {

	public static void main(String[] args) throws IOException {
		R.init("A-small-attempt2.in");
		FileWriter out=W.init("out");

		int rounds=R.Int();
		for(int i=0;i<rounds;i++)
		{
			int r=R.Int();
			int c=R.Int();
			int w=R.Int();
			int poss=c-w+1;
			
			int min=(r-1)*M.ceil(poss,w);
			
			min+=poss/(w);
			poss-=min*w;
			if(poss==0)
			{
				min--;
				poss+=w;
			}
			if(poss==1)
			{
				
			}
			else{
				min++;//miss
			}
			min+=w;
			out.write("Case #"+(i+1)+": "+min+'\n');
		}


		R.close();
		W.close();
	}
}
