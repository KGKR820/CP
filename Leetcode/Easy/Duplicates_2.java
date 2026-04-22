package Easy;
import java.util.HashMap;
public class Duplicates_2 {
    public static  boolean containsNearbyDuplicate(int[] nums, int k) {
        HashMap<Integer,Integer> hash = new HashMap<>();
        for(int i =0;i<nums.length;i++){
            if(hash.containsKey(nums[i])){
                if((i-hash.get(nums[i]) <= k)){
                    return true;
                }
            }
            hash.put(nums[i],i);
        }
        return false;
    }
    public static void main(String[] args) {
        
    }
}
