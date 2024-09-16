import java.util.Arrays;

/**
 * moveZero
 */
public class moveZero {


    static void moveZeroEl(int[] arr){

        int countNonZero = 0;

        for(int i=0; i<arr.length; i++){

            if(arr[i] != 0){
                countNonZero++;
            }
        }

        int[] tempArr = new int[countNonZero];
        int index = 0;

        for(int i=0; i<arr.length; i++){
            if(arr[i] != 0){

                tempArr[index] = arr[i];
                index++;

            }
        }

        for(int i=0; i<tempArr.length; i++){
            arr[i] = tempArr[i];
        }

        

        for(int i=tempArr.length; i<arr.length; i++){
 
            arr[i] = 0;
        }

        System.out.println(Arrays.toString(arr));

    }

    public static void main(String[] args) {
        
        int[] arr = {1,0,2,0,3};

        moveZeroEl(arr);
    }
}