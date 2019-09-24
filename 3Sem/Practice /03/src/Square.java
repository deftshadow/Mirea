public class Square extends Rectangle {



    public Square(String color, Boolean filled, double side) {
        super(color, filled, side, side);
    }

    public Square(double side) {
        super(side, side);
    }

    public Square() {
        super(2, 2);
    }

    public void setSide(double side){
        this.setLength(side);
        this.setWidth(side);
    }

    public double getSide(double side){
        return this.getWidth();
    }

    @Override
    public void setLength(double length) {
        super.setLength(length);
        super.setWidth(width);
    }

    @Override
    public void setWidth(double width) {
        super.setWidth(width);
        super.setLength(length);
    }

    @Override
    public String toString() {
        return "Square: side: " + width + "color: " + color;
    }
}
