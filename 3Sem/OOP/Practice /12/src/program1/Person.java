package program1;

public class Person {
    private StringBuilder name;
    private StringBuilder patronymic;
    private StringBuilder surname;
    public Person(StringBuilder surname){
        this.surname = surname;
    }
    public Person(StringBuilder name, StringBuilder patronymic, StringBuilder surname){
        this.name = name;
        this.patronymic = patronymic;
        this.surname = surname;
    }

    public String getInfo(){
        if(name == null && patronymic == null){
            return "Only Surname: " + surname;
        }
        return name + " " + patronymic + " " + surname;
    }

    public static void main(String args[]){
        Person person = new Person(new StringBuilder("Дмитрий"), new StringBuilder("Алексеевич"), new StringBuilder("Обломов"));
        Person person1 = new Person(new StringBuilder("Орлов"));
        System.out.println(person.getInfo());
        System.out.println(person1.getInfo());
    }
}
