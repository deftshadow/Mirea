import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

class UI extends JPanel {
    private PersonalData personalData;
    private JLabel labelFIO;
    private JTextField textFIO;
    private JTextField textINN;
    private JButton buttonSave;
    private ActionListener actionListenerSave;

    UI() {
        setLayout(null);
        setBackground(Color.cyan);

        textFIO = new JTextField();
        textFIO.setBounds(240, 205, 140, 28);

        int limitFIO = 30;
        textFIO.addKeyListener(new KeyAdapter() {
            public void keyTyped(KeyEvent event) {
                if(limitFIO <= textFIO.getText().length()) {
                    event.consume();
                }
            }
        });

        textINN = new JTextField();
        textINN.setBounds(240, 240, 140, 28);
        int limitINN = 10;
        textINN.addKeyListener(new KeyAdapter() {
            public void keyTyped(KeyEvent event) {
                if(limitINN <= textINN.getText().length()) {
                    event.consume();
                }
            }
        });

        labelFIO = new JLabel();
        labelFIO.setBounds(150, 205, 133, 28);
        labelFIO.setText("Введите ФИО:");

        JLabel labelINN = new JLabel();
        labelINN.setBounds(150, 240, 133, 28);
        labelINN.setText("Введите ИНН:");

        buttonSave = new JButton();
        buttonSave.setBounds(180, 275, 140, 28);

        buttonSave.setText("Отправить");

        add(textFIO);
        add(textINN);
        add(labelFIO);
        add(labelINN);
        add(buttonSave);

        actionListenerSave = new ClickToSaveFileButtonListener();
        buttonSave.addActionListener(actionListenerSave);
    }

    public class ClickToSaveFileButtonListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            personalData = new PersonalData(textFIO.getText(), textINN.getText());
            try {
                personalData.СheckExeption();
                GetMessageBox("Корректный ввод!");
            } catch (MyException ex) {
                GetMessageBox("Некорректный ввод ИНН!");
            }
        }
    }

    private void GetMessageBox(String information) {
        JOptionPane.showMessageDialog(null, information);
    }
}