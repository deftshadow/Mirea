public class Sum {
        public static int recursion(int num) {
            if (num < 100)
                return num;
            else
                return num % 100 + recursion(num / 100);
        }
        public static void main(String[] args) { System.out.println(recursion(228));}
    }

