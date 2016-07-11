package javaAnagrams;

import java.util.Scanner;


public class Solution {

	   static boolean isAnagram(String A, String B) {
		   if( A.length() != B.length() )
			   return false;
		   int arrayLength = 256;
	       int[] arrayOne = new int[arrayLength],
	    		 arrayTwo = new int[arrayLength];
	       for(int i = 0; i < A.length(); ++i) {
	    	   arrayOne[(A.charAt(i) - '0' - 1)] += 1;
	    	   arrayTwo[(B.charAt(i) - '0' - 1)] += 1;
	       }
	       for(int i = 0; i < arrayLength; ++i) {
	    	   if(arrayOne[i] != arrayTwo[i])
	    		  return false;
	       }
		   return true;
	   }
	    public static void main(String[] args) {
	        Scanner scanner = new Scanner(System.in);
	        String wordOne = scanner.next();
	        String wordTwo = scanner.next();
	        boolean decision = isAnagram(wordOne.toLowerCase(), wordTwo.toLowerCase());
	        if(decision)
	        	System.out.println("Anagrams");
	        else 
	        	System.out.println("Not Anagrams");
	        scanner.close();
	    }
	}
