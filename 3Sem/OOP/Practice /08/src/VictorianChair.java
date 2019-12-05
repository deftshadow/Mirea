public class VictorianChair implements Chair{
    private int age;

    public VictorianChair() {
    }

    public VictorianChair(int age) {
        this.age = age;
    }

    public int getAge() {
        return age;
    }

    @Override
    public String toString() {
        return "Стульчик викторианской эпохи";
    }
}