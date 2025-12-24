package R800;
import java.util.Scanner;
public class Domino_Pling {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt(),n=sc.nextInt();
        if(m +n ==2 ){
            System.out.println(0);
        }
        else{
            System.out.println((m*n)/2);
        }
        sc.close();
    }
}
