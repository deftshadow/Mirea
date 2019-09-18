import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class test {
    public static void main(String[] args){
        ArrayList<Student> students = new ArrayList<Student>();

        students.add(new Student("Andrusha", "Psina", 7));
        students.add(new Student("YoungSu", "Autist", 9));
        students.add(new Student("Kostya", "Broo", 1));
        students.add(new Student("Arishka", "Dragon", 6));
        students.sort(new Comparator<Student>() {
            @Override
            public int compare(Student o1, Student o2) {
                if (o1.getID() > o2.getID())
                    return 1;
                if (o2.getID() == o2.getID())
                    return 0;
                else
                    return -1;

            }
        });
        for (int i = 0; i < students.size(); i++)
        {
            System.out.println(students.get(i).getID());
        }
    }


}
