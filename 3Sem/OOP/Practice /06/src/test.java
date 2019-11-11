import java.util.ArrayList;

public class test {
    public static void main(String[] args){
        ArrayList<Student> students = new ArrayList<Student>();

        students.add(new Student("Andrusha", "Psina", 7));
        students.add(new Student("YoungSu", "Autist", 9));
        students.add(new Student("Kostya", "Broo", 1));
        students.add(new Student("Arishka", "Dragon", 6));
        sorting(students);

        for (int i = 0; i < students.size(); i++)
        {
            System.out.println(students.get(i).getID());
        }
    }

    public static  void sorting(ArrayList<Student> students){
        studentComparator comparator = new studentComparator();
        for(int i = 0; i < students.size(); i++ ){
            for(int j = 0; j<students.size()-1; j++){
                if(comparator.compare(students.get(j) , students.get(j+1)) >0){
                    Student buff;
                    buff = students.get(j);
                    students.set(j,students.get(j+1));
                    students.set(j+1,buff);


                }
            }
        }

    }
}
