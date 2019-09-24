public class Author {
    private String name;
    private String email;
    private char gender;

    public Author(String name, String email, char gender) {
        this.name = name;
        this.email = email;
        this.gender = gender;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getEmail() {
        return email;
    }

    public char getGender() {
        return gender;
    }


    @Override
    public String toString() {
        return name + " (" + gender + ") " + " at " + email ;
    }

    public static void main(String[] args){
        Author author = new Author("Andrusha-psina", "sdf", 'm' );
        System.out.println(author);

    }

}
