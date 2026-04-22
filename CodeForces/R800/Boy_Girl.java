import java.util.Scanner;
import java.util.HashSet;
public class Boy_Girl {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine();
    HashSet<Character> hash = new HashSet<Character>();
    int count =0;
    for(int i=0;i<s.length();i++){
       if(!hash.contains(s.charAt(i))){
          count++;
          hash.add(s.charAt(i));
       }
    }
    if(count %2 ==0){
        System.out.println("CHAT WITH HER!");
    }
    else{
        System.out.println("IGNORE HIM!");
    }
    sc.close();
  }  
}
