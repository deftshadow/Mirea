public class Test {
    public static void main(String[] args) {
        ArrayQueue ad = new ArrayQueue();
        ArrayQueueADT adt = new ArrayQueueADT();
        ArrayQueueModule adm = new ArrayQueueModule();
        ad.enqueue(11);
        ad.enqueue(12);
        ad.write();
        System.out.println("");

        adt.enqueue(adt, 11);
        adt.enqueue(adt,12);
        adt.write();
        System.out.println("");

        adm.enqueue(11);
        adm.enqueue(12);
        ad.write();
        System.out.println("");
    }

}
