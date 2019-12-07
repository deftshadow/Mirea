import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        getKey();
    }

    public static void getKey() {
        Scanner myScanner = new Scanner( System.in );
        boolean stopLoop = false;
        do {
            System.out.print("Enter Key ");
            String key = myScanner.nextLine();
            try {
                printDetails(key);
                stopLoop = true;
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        } while(!stopLoop);
    }

    public static void printDetails(String key) throws Exception {
        String message = getDetails(key);
        System.out.println(message);
    }

    private static String getDetails(String key) throws Exception {
        if(key.equals("")) {
            throw new Exception("Key set to empty string");
        }
        return "data for " + key;
    }
}