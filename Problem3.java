import java.util.Scanner;
import java.io.*;
public class Problem3{
public static void main(String a[]) throws IOException{
int num = new Scanner(System.in).nextInt();
if(num > 0 && num <= 1000){
	String strLine = "";
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String line = "";
        while ((line = br.readLine()) != null && !line.equals("EOF")){strLine = strLine + line + "\n";}
		String[] lines = strLine.substring(0, strLine.length() - 1).replaceAll("\n", "^ ").split(" ");
		int len = lines.length;
		while(len !=0 ){for(int k = 0; k < num; k++)System.out.print( k == 0 ? new StringBuilder(lines[len - 1]).reverse().toString().replaceAll("\\^","\n") + " " : new StringBuilder(lines[len - 1]).reverse().toString().replaceAll("\\^","") + " " );len--;}
		System.out.println("");
}}}