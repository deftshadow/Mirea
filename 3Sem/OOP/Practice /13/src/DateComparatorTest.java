import org.junit.Test;

import java.text.SimpleDateFormat;
import java.util.Date;

import static org.junit.Assert.*;

public class DateComparatorTest {

    @Test
    public void withCurrentDate() {
        assertTrue(DateComparator.withCurrentDate(new SimpleDateFormat("dd.MM.YYYY").format(new Date())));
        assertFalse(DateComparator.withCurrentDate("bldkfsnblk"));
    }
}