import java.util.ArrayList;
import java.util.HashMap;

public class OrderManager {
    private HashMap<String, InternetOrder> addressOrder = new HashMap<>();
    public void add(String address, InternetOrder order){
        addressOrder.put(address, order);
    }
    public InternetOrder get(String address){
        return addressOrder.get(address);
    }
    public void getOrders() {
        ArrayList<InternetOrder> allOrder = new ArrayList<>(addressOrder.values());
        System.out.println("Заказы: ");
        for (int i = 0; i < allOrder.size(); i++){
            allOrder.get(i).allNames();
        }
    }
    public float allPrice(){
        float aP = 0;
        ArrayList<InternetOrder> allOrder = new ArrayList<>(addressOrder.values());
        for(int i = 0; i < allOrder.size(); i++){
            aP += allOrder.get(i).allPrice();
        }
        return aP;
    }
}
