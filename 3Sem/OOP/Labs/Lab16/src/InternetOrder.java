import java.util.Arrays;
import java.util.Comparator;

public class InternetOrder{
    private int size;
    private Item[] items;

    public InternetOrder(){
        items = new Item[0];
    }
    public InternetOrder(int N, Item[] mas){
        this.size = N;
        items = new Item[N];
        for(int i = 0; i < N; i++){
            items[i] = mas[i];
        }
    }
    public boolean add(Item item){
        size++;
        Item[] items_ = new Item[size];
        for(int i = 0; i < size - 1; i++){
            items_[i] = items[i];
        }
        items_[size - 1] = item;
        items = items_;
        return true;
    }
    public Item get(int i){
        return items[i];
    }

    public void remove(String position){
        Item[] items_ = new Item[size - 1];
        for(int i = size - 1; i >= 0; i--){
            if(position.equals(items[i].getName())){
                for(int j = 0; j < i; j++){
                    items_[j] = items[j];
                }
                for(int j = i; j < size - 1; j++) {
                    items_[j] = items[j + 1];
                }
                items = items_;
                size--;
                break;
            }
        }
    }

    public int removeAll(){
        items = null;
        return size;
    }
    public int Size(){
        return size;
    }
    public Object[] Order(){
        return items;
    }
    public float allPrice(){
        float Price = 0;
        for(int i = 0; i < size; i++){
            Price += items[i].getPrice();
        }
        return Price;
    }
    public int numberPosition(String Name){
        int number = 0;
        for(int i = 0; i < size; i++){
            if (items[i].getName().equals(Name)){
                number++;
            }
        }
        return number;
    }
    public void allNames(){
        int flag = 0;
        for(int i = 0; i < size; i++) {
            flag = 0;
            for (int j = i + 1; j < size; j++) {
                if (items[i].getName().equals(items[j].getName())) {
                    flag = 1;
                }
            }
            if (flag == 0) {
                System.out.println(items[i].getName());
            }
        }

    }
    public Item[] Sort(){
        Item[] mas = items;
        Arrays.sort(mas, new Comparator<Item>() {
            @Override
            public int compare(Item o1, Item o2) {
                return o1.getName().compareTo(o2.getName());
            }
        });
        return mas;
    }

}
