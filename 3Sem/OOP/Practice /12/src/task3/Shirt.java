package task3;

public class Shirt {
    public String line;
    public Shirt(String line){
        this.line = line;
    }

    public void setLine(String line) {
        this.line = line;
    }

    @Override
    public String toString() {
        return line;
    }

    static public void main(String[] args){
        String[] shirts = new String[11];
        shirts[0] = "S001,Black Polo Shirt,Black,XL";
        shirts[1] = "S002,Black Polo Shirt,Black,L";
        shirts[2] = "S003,Blue Polo Shirt,Blue,XL";
        shirts[3] = "S004,Blue Polo Shirt,Blue,M";
        shirts[4] = "S005,Tan Polo Shirt,Tan,XL";
        shirts[5] = "S006,Black T-Shirt,Black,XL";
        shirts[6] = "S007,White T-Shirt,White,XL";
        shirts[7] = "S008,White T-Shirt,White,L";
        shirts[8] = "S009,Green T-Shirt,Green,S";
        shirts[9] = "S010,Orange T-Shirt,Orange,S";
        shirts[10] = "S011,Maroon Polo Shirt,Maroon,S";

        Shirt mas[] = new Shirt[11];
        for(int i = 0; i < 11; i++){
            mas[i] = new Shirt(shirts[i]);
            System.out.println(mas[i].toString());
        }

    }
}
