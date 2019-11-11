import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;

import javax.imageio.ImageIO;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;


public class Main extends JFrame {
    JTextField imageName;
    JButton selectPath;
    JButton showImage;
    File image;
    public Main()  {
        super();
        imageName = new JTextField();
        selectPath = new JButton("Выбрать путь");
        showImage = new JButton("Вывести картинку");

        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        this.setSize(200, 200);
        this.setLayout(null);
        this.add(selectPath);
        this.add(imageName);
        this.add(showImage);
        this.setResizable(false);
        selectPath.setBounds(30, 40, 150, 25);
        imageName.setBounds(10, 10, 180, 25);
        showImage.setBounds(30, 90,150,25);
        this.setVisible(true);
        selectPath.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e) {
                Chooser choose = new Chooser();
                image = choose.call();
                imageName.setText(image.getName());
            }
        });
        showImage.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                BufferedImage img;
                try {
                    img = ImageIO.read(image);
                    ImageIcon icon = new ImageIcon(img);
                    JLabel label = new JLabel(icon);
                    JOptionPane.showMessageDialog(null, label);
                }
                catch (IOException e1) {
                    e1.printStackTrace();
                }
            }
        });
    }
    public static void main(String[] args) {
        Main main = new Main();
    }
}


