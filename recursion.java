class recursion{




   static void PrintN(int n){

        if(n == 0){
            return;
        }

        System.out.println(n);
        
        PrintN(n-1);

    }


   static void PrintName(int n , String name){
        if(n == 0){
            return;
        }

        System.out.println(name);

        PrintName(n-1,name);
    }

    static void Print1to10(int n){

        if(n > 10){
            return;
        }

        System.out.println(n);

        Print1to10(n+1);

    }

    static void SumOfN(int n,int sum){

        if(n < 1){

            System.out.println("Sum is : " + sum);
            return;
        }

        

        SumOfN(n-1, sum+n);
        

    }
    public static void main(String[] args){

        PrintN(10);

        PrintName(10,"Rahul");

        Print1to10(1);

       SumOfN(10, 0);
        
    }
}