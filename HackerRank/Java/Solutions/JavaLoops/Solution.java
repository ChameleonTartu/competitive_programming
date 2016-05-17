package javaLoops;

import java.util.*;

public class Solution {

	public static void readAndOutputPolynom(Scanner scanner) {
		int a = scanner.nextInt(), 
			b = scanner.nextInt(), 
			polynomPower = scanner.nextInt(),
			start = a + b,
			coefficient = 1;
		System.out.print(start);
		for(int i = 1; i < polynomPower; ++i) {
			coefficient *= 2;
			start += b*coefficient;
			System.out.print(" " + start);
		}
		System.out.println();
	}
	
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int lines = scanner.nextInt();
        for( int i = 0; i < lines; ++i)
        	readAndOutputPolynom(scanner);
        scanner.close();
    }
}