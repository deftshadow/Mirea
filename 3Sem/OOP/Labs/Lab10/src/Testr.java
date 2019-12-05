public class Testr {
    public static void main(String[] args) {
        MyArrayList<Integer> arr = new MyArrayList <>();
        arr.add(12);
        arr.add(123);
        System.out.println(arr.size());
        System.out.println(arr.get(1));
    }
}
