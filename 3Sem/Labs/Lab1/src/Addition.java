public class Addition {
    public static void main(String[] args){
        int[] mas = {1,2,3,4};
        int sum = 0;
        for(int i = 0; i < mas.length; i++) {
            sum += mas[i];
        }
        System.out.println(sum);
    }
}
