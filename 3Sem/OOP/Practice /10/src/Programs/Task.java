package Programs;

import java.util.ArrayList;
import java.util.List;

public class Task {
    public static void makeList(int mas[], String smas[]){
        List newList = new ArrayList();
        for(int i = 0; i < 4; i++){
            newList.add(mas[i]);
        }
        List newsList = new ArrayList();
        for(int i = 0; i < 4; i++){
            newsList.add(smas[i]);
        }
    }
    public static void main(String[] args){
        int intMas[] = {10, 1, 3, 4};
        String stringMas[] = {"first", "second", "third", "fourth"};
        makeList(intMas, stringMas);
    }
}
