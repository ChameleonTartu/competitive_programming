package javaStdinAndStdout2;

import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int x = sc.nextInt();
            double y = sc.nextDouble();
            String s = sc.nextLine();
            if( s.length() == 0 ) s += sc.nextLine();
        
            System.out.println("String: " + s);
            System.out.println("Double: " + y);
            System.out.println("Int: " + x);
            sc.close();
    }
}
