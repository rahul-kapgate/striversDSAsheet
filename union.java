
import java.util.HashSet;
import java.util.Set;

public class union {

    public static void main(String[] args) {
        
        int arr[] = {1,2,3,4,5};
        int arr2[] = {3,4,5,6,7};

        Set <Integer> myUnionSet = new HashSet<>();

        //for loop 1
        for(int i=0; i<arr.length; i++){
            myUnionSet.add(arr[i]);
        }

        //for loop 2
        for(int i=0; i<arr2.length; i++){
            myUnionSet.add(arr[i]);
        }
        
        System.out.println(myUnionSet);
    }
}