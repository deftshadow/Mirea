public class Simple {
    int target;
    public static String function(int target, int div){
        if(div != 1 && div != target){
            if(target % div == 0)
                return "no";
            else return function(target, div - 1);
        }
         else if(div == 1){
             return "yes";
        }
         else return function(target,div - 1);
    }

    public static void main(String[] args){ System.out.println(function(31, 31));}
}

