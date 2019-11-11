package lab1;
import lab2.Array;

class ConsoleMenu{
    ConsoleMenu(){
    }
    void ShowMenu(){
        System.out.println("Enter task");
    }
}

 class Main {
     public static void main(String[] args) throws java.io.IOException {
         ConsoleMenu cs = new ConsoleMenu();
         char ch;
         do {
             cs.ShowMenu();
             ch = (char) System.in.read();
             switch (ch) {
                 case '1':
                     Point point = new Point();
                     point.Geometry();
                     break;
                 case '2':
                     Array array = new Array();
                     array.Matrix();

                     break;
                 case '3':

                     break;
                 case '4':

                     break;
                 default:
                     System.err.println("ERROR");
             }
         } while (ch != '0');
     }
 }