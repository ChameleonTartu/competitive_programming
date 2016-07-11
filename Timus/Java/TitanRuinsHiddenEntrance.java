package titanRuinsHiddenEntrance;

import java.util.Scanner;

// Timus 1910
public class TitanRuinsHiddenEntrance {
	
	public static int sumByMiddleIndex(int[] walls, int index) {
		if(index > 0 && index < walls.length)
			return walls[index - 1] + walls[index] + walls[index + 1];
		throw new RuntimeException("Index is incorrect!");
	}
	
	public static int findMaxWallSegmentMiddleIndex( int[] walls) {
		int max = sumByMiddleIndex(walls, 1), index = 1;
		for(int i = 2; i < walls.length - 1; ++i) {
			if(max < sumByMiddleIndex(walls, i)) {
				max = sumByMiddleIndex(walls, i);
				index = i;
			}
		}
		return index;
	}
	
	public static int findMaxWallSegment(int[] walls) {
		int indexForMaxSegment = findMaxWallSegmentMiddleIndex(walls);
		return sumByMiddleIndex(walls, indexForMaxSegment);
	}
	
	public static void main(String... args) {
		Scanner scanner = new Scanner(System.in);
		int numberOfWalls = scanner.nextInt();
		int[] walls = new int[numberOfWalls];
		for( int i = 0; i < numberOfWalls; ++i) {
			walls[i] = scanner.nextInt();
		}
		System.out.println(findMaxWallSegment(walls) + " " + 
						   (findMaxWallSegmentMiddleIndex(walls) + 1));
		scanner.close();
	}
}
