package Easy;
// import java.util.Arrays;
import java.util.HashSet;
public class Duplicates {
    public static boolean containsDuplicate(int[] nums) {
        // Arrays.sort(nums);
        // int i=0;
        // while(i<nums.length-1){
        //     if(nums[i] == nums[i+1]){
        //         return true;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        // return false;
        HashSet<Integer> hash = new HashSet<>();
        for(int num:nums){
            if(hash.contains(num)){
                return true;
            }
            hash.add(num);
        }
        return false;
    }
    public static void main(String[] args) {
        int[] nums = {1,2,3,5};
        System.out.println(containsDuplicate(nums));
    }
}
