package Task2;

public class MyList<E>{
    private Object[] elements;
    private int size;
    public MyList(){
        elements = new Object[10];
        size = 0;
    }
    public void add(E newElement)
    {
        elements[size] = newElement;
        size++;
    }
    public E get(int index){
        if(index <= size){
            return (E)elements[index];
        }
        else
            throw new IndexOutOfBoundsException("Index > size");
    }
    public void firstFive(){
        for(int i = 0; i < 5; i++){
            System.out.println(get(i));
        }
    }
}
