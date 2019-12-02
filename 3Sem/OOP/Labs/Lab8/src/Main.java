import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Что записываем?");
        String line = scan.nextLine();
        try (FileWriter writer = new FileWriter("src/text.txt", false)) {
            writer.write(line);
        }
        catch(IOException ex){
            System.out.println(ex.getMessage());
        }
    }
}