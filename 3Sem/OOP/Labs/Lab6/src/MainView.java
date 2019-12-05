import java.util.Random;

import javafx.animation.PauseTransition;
import javafx.application.*;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.Orientation;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.FlowPane;
import javafx.stage.Stage;
import javafx.util.Duration;

public class MainView extends Application {

	TextField text;
	Button button;
	Label label;
	int thinkNumber;
	final Random random = new Random();
	public static int count = 0;

	public MainView() {
		text = new TextField();
		text.setMaxWidth(60);
		button = new Button("Угадай!");
		label = new Label();
	}

	@Override
	public void start(final Stage stage) throws Exception {
		thinkNumber = random.nextInt() % 21;
		FlowPane pane = new FlowPane(Orientation.VERTICAL, text, button, label);
		pane.setAlignment(Pos.CENTER);
		Scene scene = new Scene(pane);
		stage.setScene(scene);
		stage.setTitle("Угадайка");
		button.setOnAction(new EventHandler<ActionEvent>() {
			public void handle(ActionEvent event) {
				int unknownNumber = Integer.parseInt(text.getText());
				if (unknownNumber == thinkNumber) {
					label.setText("Вы угадали!");
					button.setDisable(true);
					PauseTransition wait = new PauseTransition(Duration.seconds(1));
					wait.setOnFinished(new EventHandler<ActionEvent>() {
						public void handle(ActionEvent e) {
							stage.close();
						}
					});
					wait.play();
				} else {
					label.setText("Вы не угадали...");
					count++;
					if (count == 3) {
						button.setDisable(true);
						PauseTransition wait = new PauseTransition(Duration.seconds(1));
						wait.setOnFinished(new EventHandler<ActionEvent>() {
							public void handle(ActionEvent e) {
												   stage.close();
											   }
						});
						wait.play();
					}
				}
			}
		}
		);
		stage.setHeight(120);
		stage.setWidth(120);
		stage.show();
	}

	public static void main(String[] args) {
		MainView.launch(args);
	}

}
