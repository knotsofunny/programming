import java.util.Arrays;

public class Main {

	public static void main(String[] args) {
		System.out.println(p004());

	}

	// Multiples of 3 and 5
	public static int p001() {
		int answer = 0;

		for (int i = 1; i < 1000; i += 1) {
			if (i % 3 == 0 || i % 5 == 0) {
				answer += i;
			}
		}

		return answer;
	}

	// Even Fibonacci numbers
	public static long p002() {
		int a;
		int b = 1;
		int c;
		long answer = 0;

		for (a = 1; a < 4000000; a += b) {
			if (a % 2 == 0) {
				answer += a;
			}
			c = a;
			a = b;
			b = c;
		}

		return answer;
	}

	// Largest prime factor
	public static long p003() {
		long num = 600851475143L;

		for (int i = 2; i < num; i += 1) {
			if (num % i == 0) {
				num /= i;
				i = 2;
			}
		}
		return num;
	}

	// Largest palindrome product
	public static int p004() {

		int answer = 0;

		for (int a = 100; a < 1000; a += 1) {
			for (int b = 100; b < a; b += 1) {
				int num = a * b;
				int[] numDigits = new int[6];
				int holder = num;
				int offset = 1;

				if (num > 100000) {
					offset = 0;
				}

				for (int i = offset; i < 6; i += 1) {
					if (i != 5) {
						numDigits[i] = (int) ((num - (num % Math.pow(10, 5 - i))) / Math.pow(10, 5 - i));
					} else {
						numDigits[i] = num;
					}
					num = (int) ((num % Math.pow(10, 5 - i)));
				}

				boolean palTest = true;
				for (int i = offset; i < 3; i += 1) {
					if (numDigits[i] != numDigits[5 + offset - i]) {
						palTest = false;
					}
				}

				if (palTest && holder > answer) {
					answer = holder;
				}
			}
		}
		return answer;

	}

	public static long p010() {
		int[] primeList = primeSeive(2000000);

		long answer = 0;

		for (int i = 0; i < primeList.length; i += 1) {
			answer += primeList[i];
		}

		return answer;
	}

	public static int[] primeSeive(int limit) {
		int[] numList = new int[limit + 1];
		int primeCount = 0;
		int count = 0;
		int[] primeList;

		for (int i = 0; i <= limit; i += 1) {
			numList[i] = i;
		}

		for (int i = 2; i < Math.sqrt(limit); i += 1) {
			for (int j = i * 2; j < limit; j += i) {
				numList[j] = 0;
			}
		}

		for (int i = 2; i < limit; i += 1) {
			if (numList[i] != 0) {
				primeCount += 1;
			}
		}

		primeList = new int[primeCount];

		for (int i = 2; i < limit; i += 1) {
			if (numList[i] != 0) {
				primeList[count] = numList[i];
				count += 1;
			}
		}

		return primeList;
	}

}
