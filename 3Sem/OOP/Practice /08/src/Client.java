public class Client {
    public Chair chair;

    public void sit() {
        System.out.println("Сесть на " + chair + " стул");
    }

    public void setChair(Chair chair) {
        this.chair = chair;
    }
}