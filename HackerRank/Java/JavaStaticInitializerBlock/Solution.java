package javaStaticInitializerBlock;

import java.util.Scanner;

public class Solution {
	
	static boolean flag = false;
	static int B, H;
	static{
		Scanner scanner = new Scanner(System.in);
		B = scanner.nextInt();
		H = scanner.nextInt();
		Exception e = new Exception();
		if( B <= 0 || H <= 0)
			System.out.println(e.toString() + ": Breadth and height must be positive");
		else
			flag = true;
		scanner.close();
	}
	
	public static void main(String[] args){
		if(flag){
			int area = B * H;
			System.out.print(area);
		}	
	}
}