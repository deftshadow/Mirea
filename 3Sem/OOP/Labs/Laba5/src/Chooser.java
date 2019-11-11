import java.io.File;

import javax.swing.JFileChooser;
import javax.swing.filechooser.FileNameExtensionFilter;

public class Chooser extends JFileChooser {

    public Chooser() {
        super();
        FileNameExtensionFilter filter = new FileNameExtensionFilter("Images" , "img", "jpeg", "jpg", "png");
        this.setFileFilter(filter);
        this.setCurrentDirectory(new File("."));
        this.setFileSelectionMode(JFileChooser.FILES_ONLY);
    }
    public File call() {
        showOpenDialog(null);
        File file = getSelectedFile();
        return file;
    }
}