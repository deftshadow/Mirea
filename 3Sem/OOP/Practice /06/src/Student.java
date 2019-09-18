public class Student {
    private String name;
    private String surname;
    private int ID;


    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getSurname() {
        return surname;
    }

    public void setSurname(String surname) {
        this.surname = surname;
    }

    public int getID() {
        return ID;
    }

    public void setID(int ID) {
        this.ID = ID;
    }

    public Student(String name, String surname, int ID) {
        this.name = name;
        this.surname = surname;
        this.ID = ID;
    }





}
