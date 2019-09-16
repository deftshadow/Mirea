package first;

public class Ball {
    private int radius;

    public Ball(int radius) {
        this.radius = radius;
    }

    public int getRadius() {
        return radius;
    }

    public void setRadius(int radius) {
        this.radius = radius;
    }

    @Override
    public String toString() {
        return "first.Ball {radius=" + radius + '}';
    }

    public static void main(String[] args) {
        Ball b = new Ball(5);
        System.out.println(b);
    }
}