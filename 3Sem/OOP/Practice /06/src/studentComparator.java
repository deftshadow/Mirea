import java.util.Comparator;

public class studentComparator implements Comparator<Student> {


    @Override
    public int compare(Student o1, Student o2) {
        if (o1.getID() > o2.getID())
            return 1;
        if(o2.getID() == o2.getID())
            return 0;
        else
            return -1;

    }
}
