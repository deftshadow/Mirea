public class Dish {
    private double volume;
    private int height;
    private int width;

    public Dish(double volume, int height, int width) {
        this.volume = volume;
        this.height = height;
        this.width = width;
    }

    public void setVolume(double volume) {
        this.volume = volume;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public void setWidth(int width) {
        this.width = width;
    }

    public double getVolume() {
        return volume;
    }

    public int getHeight() {
        return height;
    }

    public int getWidth() {
        return width;
    }
}
