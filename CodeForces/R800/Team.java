package R800;
import java.util.Scanner;
public class Team {
   public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int output =0;
    for(int i=0;i<n;i++){
        int a=sc.nextInt();
        System.out.print(" ");
        int b=sc.nextInt();
        System.out.print(" ");
        int c=sc.nextInt();
        if(a+b+c >=2){
         output++;
        }
    }
    System.out.println(output);
    sc.close();
   }
}
