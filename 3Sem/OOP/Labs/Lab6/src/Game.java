import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Game extends JFrame {
    int count = 0;

    Game(){
        super("Угадайка");
        JButton jButton = new JButton("Try!");
        JTextField jTextField = new JTextField(10);
        add(jTextField);
        add(jButton);
        setLayout(new FlowLayout());
        int number = (int) (Math.random() * 20);
        System.out.println(number);
        jTextField.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent actionEvent) {
                count++;
                int n = Integer.parseInt(jTextField.getText());
                if ( count < 4){
                    if (number == n){
                        JOptionPane.showMessageDialog(null, "You win!");
                        setVisible(false);
                        dispose();
                    }else
                    {
                        JOptionPane.showMessageDialog(null, " Try again!");
                        jTextField.setText("");
                    }
                }else
                {
                    JOptionPane.showMessageDialog(null, " You lose!!!");
                    setVisible(false);
                    dispose();
                }
            }
        });
        setSize(360,120);
        setVisible(true);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
    }

}
class Main{
    public static void main(String[] args) {
        new Game();
    }
}