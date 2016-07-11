package javaOutputFormatting;

import java.util.Scanner;

public class Solution {

	public static String formatString(String s1) {
        int stringLength = 15;
        for( int j = s1.length(); j < stringLength; ++j) {
            s1 += " ";
        }
        return s1;
    }
 
    public static String formatInt(String intOutput) {
        int intLength = 3;
        for( int j = intOutput.length(); j < intLength; ++j) {
            intOutput = "0" + intOutput;
        }
        return intOutput;
    }
    
    public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            System.out.println("================================");
            for(int i = 0; i < 3; i++)
            {
                String s1 = sc.next();
                int x = sc.nextInt();
                String intOutput = Integer.toString(x);
                System.out.println(formatString(s1) + formatInt(intOutput));
            }
            System.out.println("================================");
            sc.close();
    }
}

