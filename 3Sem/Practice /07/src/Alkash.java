import java.util.Scanner;

public class Alkash {
    Gamer one;
    Gamer two;

    public Alkash() {
        one = new Gamer();
        two = new Gamer();

        System.out.println("Введите карты первого игрока: ");
        Scanner in = new Scanner(System.in);
        for(int i = 0; i < 5;i++ ){
            int card;
            card = in.nextInt();
            one.AddCard(card);
        }

        System.out.println("Введите карты второго игрока: ");
        for(int i = 0; i < 5;i++ ){
            int card;
            card = in.nextInt();
            two.AddCard(card);
        }
        int abacus = 1;


        while (!one.IsEmpty() && !two.IsEmpty()) {
            if (one.First() > two.First()) {
                one.AddCard(two.First());
                int card_one = one.First();
                one.Remove();
                one.AddCard(card_one);
                two.Remove();
            }
            if (one.First() < two.First()) {
                two.AddCard(one.First());
                int card_two = two.First();
                two.Remove();
                two.AddCard(card_two);
                one.Remove();
            }
            if (one.First() == 0) {
                one.AddCard(two.First());
                int card_one = one.First();
                one.Remove();
                one.AddCard(card_one);
                two.Remove();
            }
            if (two.First() == 0) {
                two.AddCard(one.First());
                int card_two = two.First();
                two.Remove();
                two.AddCard(card_two);
                one.Remove();
            }
            abacus++;


        }

        if(one.IsEmpty())
            System.out.println("Победил второй " + abacus);
        else if (two.IsEmpty()){
            System.out.println("Победил первый " + abacus);
        }





    }




    public static void main(String[] args){
        Alkash alkash = new Alkash();
    }
}
