class PersonalData {
    private String FIO;
    private String INN;

    PersonalData(String FIO, String INN) {
        this.FIO = FIO;
        this.INN = INN;
    }

    void СheckExeption() throws MyException {
        try {
            Integer.parseInt(INN);
            if (INN.length() != 10) {
                throw new MyException("Неправильный ввод ИНН!");
            }
        } catch (Exception e) {
            throw new MyException("Неправильный ввод ИНН!");
        }
    }
}