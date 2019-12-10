import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Date;

public class DateComparator {
    private static DateFormat dateFormat = new SimpleDateFormat("dd.MM.YYYY");
    public static boolean withCurrentDate(String source) {
        return (dateFormat.format(new Date()).equals(source));
    }
}