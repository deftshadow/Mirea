public class Main {
    public static void main(String[] args){
        Dish potatoes = new Dish("Жаренная картошка", "Картошка, масло, лук", 250);
        Drink milk = new Drink("Молоко", "молоко цельное", 100);
        Dish salad = new Dish("Цезарь", "курица, салат, сухари, помидоры", 300);
        Dish pork = new Dish("Cвинина с соусом", "свининва, сметана, паприка", 600);
        Drink juice = new Drink("Cок яблочный","сок, яблоки, сахар", 100);

        InternetOrder firstOrder = new InternetOrder();
        firstOrder.add(salad);
        firstOrder.add(pork);
        firstOrder.add(juice);
        firstOrder.add(juice);


        System.out.println(firstOrder.numberPosition("Cок яблочный"));
        firstOrder.remove("Cок яблочный");


        InternetOrder secondOrder = new InternetOrder();
        secondOrder.add(milk);
        secondOrder.add(salad);
        secondOrder.add(pork);
        secondOrder.add(potatoes);

        OrderManager order = new OrderManager();
        order.add("Moscow, Sovetscaya, 16", firstOrder);
        order.add("Moscow, Minskaya, 45", secondOrder);
        System.out.println(order.get("Moscow, Sovetscaya, 16").allPrice());
        System.out.println(order.get("Moscow, Minskaya, 45").allPrice());
        order.getOrders();
        System.out.println("Full price: " + order.allPrice());
        System.out.println("First order:");
        order.get("Moscow, Sovetscaya, 16").allNames();

    }

}
