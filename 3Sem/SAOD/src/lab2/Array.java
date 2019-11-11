/*
Постановка задачи.Дана целочисленная матрица из n строк и m столбцов
(1<n<=100, 1<m<=50). Выполнить заданную операцию над матрицей.
13.Добавление столбцов После каждого нулевого столбца добавить массив b(n)
*/

package lab2;
import java.util.Arrays;
import java.util.Scanner;

public class Array {
    int[][] matrix = new int [100][50];
    private int rows = 0;
    private int columns = 0;
    private Scanner scan= new Scanner(System.in);

    public int Matrix() {
        System.out.println("enter rows");
        rows = scan.nextInt();
        System.out.println("enter columns");
        columns = scan.nextInt();
        if (!(rows > 1 && rows <= 100 && columns > 1 && columns <= 50)) {
            System.out.println("Uncorrect input! Correct: 1 < rows <= 100, 1 < columns <= 50");
            return 2;
        }
        System.out.println("Output matrix");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                matrix[i][j] = Math.toIntExact(Math.round(Math.random() * 100));
                System.out.print(" " + matrix[i][j] + " ");
            }
            System.out.println();
        }


            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    matrix[i]

                }
                System.out.println();
        }







        return 0;
    }






}
