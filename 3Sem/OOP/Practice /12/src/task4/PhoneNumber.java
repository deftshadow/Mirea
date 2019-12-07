package task4;

public class PhoneNumber {
    private String oldFormat;
    public PhoneNumber(String oldFormat){
        this.oldFormat = oldFormat;
    }

    public StringBuffer changeFormat(){
        String number;
        if(oldFormat.charAt(0) == '8'){
            oldFormat = oldFormat.replace("8", "+7");
        }
        StringBuffer newFormat = new StringBuffer(oldFormat);
        newFormat.insert(oldFormat.length() - 7, "-");
        newFormat.insert(oldFormat.length() - 3, "-");
        return newFormat;
    }

    public static void main(String[] args){
        PhoneNumber phoneNumber = new PhoneNumber("89263555027");
        System.out.println(phoneNumber.changeFormat());

        PhoneNumber phoneNumber1 = new PhoneNumber("+1049263555027");
        System.out.println(phoneNumber1.changeFormat());
    }
}
