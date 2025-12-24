package Easy;

import java.util.List;

public class Pascal_Traingle {
   public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> output = new java.util.ArrayList<>();
        for(int i=0;i<numRows;i++){
            List<Integer> row = new java.util.ArrayList<>();
            long val = 1;
            for(int j=0;j<=i;j++){
                
                row.add((int) val);
                val = val *(i-j)/(j+1);
            }
            output.add(row);
        }
        return output;

    }
}
