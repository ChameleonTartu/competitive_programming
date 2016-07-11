package javaEndOfFile;

import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int iterationNumber = 1;
        while(scanner.hasNext()) {
        	String line = scanner.nextLine();
        	System.out.println((iterationNumber++) + " " + line);
        }
        scanner.close();
    }
}