package R800;
import java.util.Scanner;
public class Way_Too_Long_Words {
    public static void main(String args[]){
         Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] arr = new String[n];
        for(int i=0;i<n;i++){
           arr[i] = sc.next();
        }
        for(String num : arr){
            if(num.length() > 10){
                System.out.println(num.charAt(0) + Integer.toString(num.length() - 2) + num.charAt(num.length() - 1));
            }
            else{
                System.out.println(num);
            }
        }
        sc.close();
    }
}
