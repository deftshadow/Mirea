public class Andrysha implements Priceable {
    String men;
    int hours;

    public Andrysha(String men, int hours) {
        this.men = men;
        this.hours = hours;
    }

    @Override
    public int getPrice() {
        if (men == "Костя")
        return 0;
        else return 1000 * hours;
    }
}
