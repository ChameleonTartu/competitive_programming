package javaStringReverse;

import java.util.Scanner;

public class Solution {
    
	public static boolean isPalindrom(String palindrom) {
		if( palindrom.length() == 1 || palindrom.length() == 0 ) return true;
		if( palindrom.charAt(0) == palindrom.charAt(palindrom.length() - 1) && palindrom.length() > 2) 
			return true && isPalindrom(palindrom.substring(1, palindrom.length() - 1));
		if( palindrom.charAt(0) == palindrom.charAt(palindrom.length() - 1) ) return true;
		return false;
	}
	
	public static void main(String[] args) {
        
        Scanner scanner =new Scanner(System.in);
        String palindrom = scanner.next();
        if(isPalindrom(palindrom))
        	System.out.println("Yes");
        else
        	System.out.println("No");
        
        scanner.close();
    }
}
