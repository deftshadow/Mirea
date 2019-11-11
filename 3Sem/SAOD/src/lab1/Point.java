//Определить, попадает ли точка с координатами {x,y}в закрашенные области.

package lab1;
import java.util.Scanner;

class Point {
    private Scanner scan= new Scanner(System.in);
    void Geometry(){
        System.out.println("enter x");
        int x = scan.nextInt();
        System.out.println("enter y");
        int y = scan.nextInt();
        System.out.println("enter radius");
        int radius = scan.nextInt();
        System.out.println("enter side of rectangle");
        int rectangle = scan.nextInt();
        if (x >= -rectangle / 3 && x <= rectangle / 3 && y >= -rectangle / 3 && y <= rectangle / 3)
                System.out.println("NO");
            else
                System.out.println("YES");
        if (x * x + y * y <= radius*radius)
            System.out.println("YES");
        else
            System.out.println("NO");

    }
}
