public abstract class Shape {
    protected String color;
    protected Boolean filled;

    public Shape() {
        color = "yellow";
        filled = false;
    }

    public Shape(String color, Boolean filled) {
        this.color = color;
        this.filled = filled;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public boolean isFilled(){
        return filled;
    }

    public void setFilled(Boolean filled) {
        this.filled = filled;
    }

    public abstract double getArea();
    public abstract double getPerrimeter();

    @Override
    public String toString() {
        return "Shape " + color;
    }

    public static void main(String[] args ){
        Shape circle = new Circle();
        System.out.println(circle.getArea());
    }
}



