package R800;
import java.util.Scanner;
public class Bit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n  = sc.nextInt();
        int x =0;
        sc.nextLine();
        for(int i=0;i<n;i++){
            String s = sc.nextLine();
            if(s.equals("++X") || s.equals("X++")){
              x ++;
            }
            else if(s.equals("--X") || s.equals("X--")){
                x--;
            }
        }
        System.out.println(x);
        sc.close();
    }
}
