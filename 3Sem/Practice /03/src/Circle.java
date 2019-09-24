public class Circle extends Shape {
    protected double radius;

    public Circle(){
        super();
        radius = 17;
    }

    public Circle (double radius){
        super();
        this.radius = radius;
    }


    public Circle(double radius, String color, boolean filled){
        super(color, filled);
        this.radius = radius;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }

    public double getRadius() {
        return radius;
    }

    @Override
    public double getArea() {
        return Math.PI * radius * radius;
    }

    @Override
    public double getPerrimeter() {
        return 2 * Math.PI * radius;
    }

    @Override
    public String toString() {
        return "Circle: " + radius + "\ncolor:" + color;
    }
}
