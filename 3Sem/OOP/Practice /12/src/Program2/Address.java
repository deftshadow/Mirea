package Program2;

public class Address {
    private String fullAddress;
    public String country;
    public String region;
    public String town;
    public String street;
    public String house;
    public String corpus;
    public String apartment;
    public Address(String address){
        this.fullAddress = address;
    }
    public void parts(){
        String[] mas = new String[7];
        int i = 0;
        for(String retval : fullAddress.split(",")){
            mas[i] = retval;
            i++;
        }
        country = mas[0];
        region = mas[1];
        town = mas[2];
        street = mas[3];
        house = mas[4];
        corpus = mas[5];
        apartment = mas[6];
    }
    public String getAddress(){
        return country+ " " + region + " " + town + " " + street + " " + house + " " +corpus + " " + apartment;
    }

    public static void main(String[] args){
        Address address = new Address("Россия,Москва,Москва,Советская,16,2,55");
        address.parts();
        System.out.println(address.getAddress());
    }
}
