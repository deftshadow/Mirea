public class Pan extends Dish {
    String material;
    public Pan(double volume, int height, int width) {
        super(volume, height, width);
    }
    public String getMaterial() {
        return material;
    }
    public void setMaterial(String material) {
        this.material = material;
    }
}
