package Task2;

public class Main {
    public static void main(String[] args){
        MyList<String> list = new MyList<>();
        list.add("first");
        list.add("second");
        list.add("third");
        list.add("fourth");
        list.add("fifth");
        list.add("sixth");
        System.out.println("element 2: " + list.get(2));
        list.firstFive();
    }
}
