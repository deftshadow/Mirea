import  javax.swing.*;

public class Main {
    public static void main(String[] args) {
        JFrame window = new JFrame("Оформление заказа");
        window.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        window.setBounds(128, 128, 550, 550);
        window.setContentPane(new UI());
        window.setVisible(true);
    }
}