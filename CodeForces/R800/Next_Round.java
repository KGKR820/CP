package R800;
import java.util.Scanner;
public class Next_Round{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(),k=sc.nextInt();
        int output =0;
        int b = 0 ;
        for(int i=0;i<n;i++){
            int a = sc.nextInt();
            if(i<k){
                if(a==0){
                    break;
                }
                if(k==i+1){
                    b=a;
                }
                output ++;
            }
            else if(b ==a){
                output ++;
            }
        }
        System.out.println(output);
        sc.close();
    }
}