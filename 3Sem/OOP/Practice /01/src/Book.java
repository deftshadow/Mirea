public class Book {
    private int numberOfPages;
    private String author;
    private String name;

    public Book(int numberOfPages, String author, String name) {
        this.numberOfPages = numberOfPages;
        this.author = author;
        this.name = name;
    }

    public Book() {
        numberOfPages = 400;
        author = "HARUKI";
        name = "1Q84";
    }

    public int getNumberOfPages() {
        return numberOfPages;
    }

    public void setNumberOfPages(int numberOfPages) {
        this.numberOfPages = numberOfPages;
    }

    public String getAuthor() {
        return author;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public static void main(String[] args){
        Book book = new Book(8, "Tolstoi", "asdf" );
        System.out.println(book.numberOfPages);
        System.out.println(book.author);
        System.out.println(book.name);
    }

}
