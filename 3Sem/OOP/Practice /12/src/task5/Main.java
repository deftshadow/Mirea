package task5;

import java.io.*;
import java.util.ArrayList;

public class Main {
    static public void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String fileName = reader.readLine();
        BufferedReader buff = new BufferedReader(new FileReader(fileName));
        String fullLine = buff.readLine();
        System.out.println("old line: " + fullLine);
        ArrayList<StringBuilder> words = new ArrayList<>();

        for (String word : fullLine.split(" ")) {
            words.add(new StringBuilder(word));
        }
        for(int i = words.size() - 1; i >= 0; i--){
            StringBuilder word = words.get(words.size() - 1);
            for(int j = 0; j < words.size(); j++){
                char ch = words.get(j).charAt(0);
                ch = Character.toLowerCase(ch);
                if(ch == word.charAt(word.length() - 1)){
                    System.out.println(words.get(j) + " last " + word);
                    words.add(words.remove(j));
                    break;
                }
            }
        }
        StringBuilder allLine = new StringBuilder();
        for(int i = 0; i < words.size(); i++){
            allLine.insert(allLine.length(), words.get(i) + " ");
        }
        System.out.println("new line: " + allLine);
    }
}
