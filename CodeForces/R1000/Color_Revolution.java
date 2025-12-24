package R1000;
import java.util.Scanner;
public class Color_Revolution{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] arr = new int[n][2];
        for(int i=0;i<n;i++){
            arr[i][0]=sc.nextInt();
            arr[i][1]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            int k = arr[i][1];
            int n1 = arr[i][0]/(1+k+(k*k)+(k*k*k));
            System.out.println(n1 + " " + n1*k + " "+n1*k*k + " " +n1*k*k*k);
        }
        sc.close();
    
    }
}
