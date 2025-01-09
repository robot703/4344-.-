import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = Integer.parseInt(scanner.next());

        for (int i = 0; i < T; i++) {
            int a = Integer.parseInt(scanner.next());
            int[] List = new int[101]; // 숫자 범위가 0~100이므로 크기를 101로 설정
            Arrays.fill(List, 0);

            int max = 0; // 초기값 0
            int maxIndex = 0;

            for (int j = 0; j < 1000; j++) {
                int b = Integer.parseInt(scanner.next());
                List[b]++;
            }
            for (int j = 0; j <= 100; j++) { // 범위는 0부터 100까지
                if (List[j] > max || (List[j] == max && j > maxIndex)) {
                    max = List[j];
                    maxIndex = j;
                }
            }
            System.out.println("#" + (i + 1) + " " + maxIndex);
        }
    }
}
