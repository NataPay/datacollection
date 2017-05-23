import java.io.*;
import java.util.*;
import java.math.*;

public class B
{

	public static void main(String[] args) throws Exception
	{
    int T;	
		RandomAccessFile in = new RandomAccessFile(args[0],"r");
		T=Integer.parseInt(in.readLine());
		
		

		for (int i=1; i<=T; i++)
		{
		  String line=in.readLine();
		  int N=Integer.parseInt(line);
		  line=in.readLine();
		  String[] trains=line.split("[ ]+");

      String ans=solve(trains);
      System.out.println("Case #"+i+": "+ans);
    }

		in.close();
	}
	
	
	public static String solve(String[] trains)
	{
	   int n=trains.length;
	   
	   long valid=0;
	   
	   int[] ind=new int[n];
	   for (int i=0; i<n; i++) ind[i]=i;
	   
	   int count=0;
	   
	   do
	   {
	     if (isValid(trains,ind)) count++;
	   }
	   while(nextPermutation(ind));
	   
	   return ""+count;
  }
  
  public static boolean isValid(String[] trains, int[] ind)
  {
    char prev='Q';
    boolean[] seen=new boolean[26];
    for (int i=0; i<ind.length; i++)
    {
      int i2=ind[i];
      for (int k=0; k<trains[i2].length(); k++)
      {
        char cur=trains[i2].charAt(k);
        int val=(int)(cur-'a');
        if (seen[val] && prev!=cur) return false;
        
        seen[val]=true;
        prev=cur;
      }
    }
    
    return true;
  }
  
	//elements in a have to be sorted in ascending order
}