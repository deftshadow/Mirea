import java.util.ArrayDeque;

public class Gamer {
    ArrayDeque<Integer> cards = new ArrayDeque<Integer>();

    public void AddCard(int card){
        cards.add(card);
    }

    public void Remove(){
        cards.poll();
    }

    public Integer First(){
        return cards.peek();
    }

    public boolean IsEmpty(){
        return cards.isEmpty();
    }

}