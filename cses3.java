import java.util.*;
class cses3 {
	public static void main(String[] args) {
		Scanner sc =  new Scanner(System.in);
		long N = sc.nextInt();
		ArrayList<Long> arr =  new ArrayList<>(N);
		for (int i = 0; i < N ; i++ ) {
			int z = sc.nextInt();
			arr.add(z);
		}
		long ans = 0, temp = 0;
		for (int i = 1; i < N ; i++) {
			if (arr.get(i - 1) > arr.get(i)) {
				temp = (arr.get(i - 1) - arr.get(i));
				arr.set(i, temp + arr.get(i));
				ans += temp;
			}
		}

		System.out.println(ans);

		// for (Integer x : arr) {
		// 	System.out.print(x + " ");
		// }

	}
}