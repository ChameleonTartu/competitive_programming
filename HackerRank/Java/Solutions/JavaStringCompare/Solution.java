package javaStringCompare;

import java.util.Arrays;
import java.util.Scanner;

public class Solution {
	
	public static String[] readAndSplitString(Scanner scanner) {
		String line = scanner.next();
		int windowLength = scanner.nextInt();
		String[] lines = new String[line.length() - windowLength + 1];
		for(int i = 0; i < line.length() - windowLength + 1; ++i) {
			lines[i] = line.substring(i, windowLength + i);
		}
		return lines;
	}
	
	public static void main(String ...args) {
		Scanner scanner = new Scanner(System.in);
		String[] lines = readAndSplitString(scanner);
		Arrays.sort(lines);
		System.out.println(lines[0]);
		System.out.println(lines[lines.length - 1]);
		scanner.close();
	}
}
