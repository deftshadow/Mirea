import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class MainWindow extends JFrame {
    JButton madrid;
    JButton milan;
    JLabel result;
    JLabel lastScorer;
    JLabel winner;
    int madridScore = 0;
    int milanScore = 0;


    public MainWindow() {
        this.setSize(300, 240);
        this.setLayout(null);
        this.setResizable(false);
        madrid = new JButton("Real Madrid");
        milan = new JButton("AC Milan");
        result = new JLabel("Result: 0X0");
        lastScorer = new JLabel("Last Scorer: N/A");
        winner = new JLabel("Winner: DRAW");

        this.add(madrid);
        this.add(milan);
        this.add(result);
        this.add(lastScorer);
        this.add(winner);

        madrid.setBounds(10, 10, 100, 60);
        milan.setBounds(190,10, 100, 60);
        result.setBounds(50, 80, 200, 50);
        lastScorer.setBounds(50, 130, 200, 50);
        winner.setBounds(50, 180, 200, 50);

        madrid.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                lastScorer.setText("Last Scorer : Real Madrid");
                madridScore++;
                result.setText("Result: " + madridScore + " X " + milanScore);
                if(madridScore>milanScore)
                    winner.setText("Winner: Madrid");
                else if(milanScore>madridScore)
                    winner.setText("Winner: Milan");
                else{
                    winner.setText("DRAW");
                }


            }
        });
        milan.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                lastScorer.setText("Last Scorer : AC Milan");
                milanScore++;
                result.setText("Result: " + madridScore + " X " + milanScore);
                if(madridScore>milanScore)
                    winner.setText("Winner: Madrid");
                else if(milanScore>madridScore)
                    winner.setText("Winner: Milan");
                else{
                    winner.setText("DRAW");
                }

            }
        });




        this.setVisible(true);
    }
    public static void main(String[] args){
        MainWindow mainWindow = new MainWindow();

    }
}
