public class Plate extends Dish {
    private String color;
    public Plate(double volume, int height, int width) {
        super(volume, height, width);
    }
    public String getColor() {
        return color;
    }
    public void setColor(String color) {
        this.color = color;
    }
}
