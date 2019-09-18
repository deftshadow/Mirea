public class Ball {
    private int radius;
    private String color;

    public Ball(int radius, String color) {
        this.radius = radius;
        this.color = color;
    }

    public Ball() {
        radius = 5;
        color = "black";
    }

    public int getRadius() {
        return radius;
    }

    public void setRadius(int radius) {
        this.radius = radius;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public static void main(String[] args){
        Ball ball;
        ball = new Ball(6,"white");
        System.out.println(ball.color);
        System.out.println(ball.radius);
    }

}
