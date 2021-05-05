import java.util.*;

public class c289B {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int d = sc.nextInt();
        int[] arr = new int[n*m];
        Set<Integer> s = new HashSet<Integer>();
        for (int i = 0; i <n*m;i++)
        {
            arr[i] = sc.nextInt();
            s.add(arr[i]%d);
        }
        boolean x = s.size() <= 1;

        Arrays.sort(arr);
        int middle = arr.length/2;

        int median = arr[middle];

        int ans = 0;

        for (int j : arr) {
            ans += Math.abs(median - j) / d;
        }

        System.out.println(x?ans:-1);

    }



}
