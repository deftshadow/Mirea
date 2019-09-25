import java.util.ArrayList;
import java.util.Scanner;

public class first {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<Number> numbers = new ArrayList<Number>();
        int num;
        do {
            num = in.nextInt();
            if (num % 3 == 0 && num != 0) {
                System.out.println(num + " ");
                numbers.add(new Number(num));
            }
        }while (num > 0);

        for(int i = 0; i < numbers.size(); i++){
            System.out.println(numbers.get(i).hashCode() + " ");

        }
    }


    public static class Number{
        public Number(int value) {
            this.value = value;
        }

        String name = "number";
        int value;

        @Override
        public int hashCode() {
            return name.hashCode()*31 + value;
        }
    }




}
