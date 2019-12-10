import java.util.Date;

public class TaskManager {
    public static Task makeTask(String assignee) {
        Task task = new Task(assignee, new Date());
        return task;
    }
}