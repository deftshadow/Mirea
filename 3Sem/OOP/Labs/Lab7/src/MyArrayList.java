import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;

public class MyArrayList {
    private Object[] arr;
    private int size;
    public MyArrayList(){
        size=0;
    }
    public MyArrayList(int size, Object[] elements){
        this.arr = elements;
        this.size=size;
    }

    public int size() {
        return size;
    }

    public boolean isEmpty() {
        return size!=0;
    }

    public boolean contains(Object o) {
        for (int i=0; i<size; i++){
            if (arr[i].equals(o))
                return true;
        }
            return false;
    }


    void add(Object newOb){
        size++;
        Object[] tmp = new Object[size];
        for (int i=0; i<(size-1);i++)
            tmp[i]=this.arr[i];
        tmp[size-1]=newOb;
        this.arr=tmp;
    }

    public void write(){
        for (int i=0; i<size; i++)
            System.out.println(String.valueOf(arr[i]));
    }
    public boolean remove(Object o) {
        if (this.contains(o)){
            int index=this.indexOf(o);
            removeAt(index);
            return true;
        }
        System.out.println("Такого элемента нет");
        return false;
    }

    public void clear() {
        size=0;
    }


    public Object set(int index, Object element) {
        arr[index]=element;
        return arr[index];
    }

    public void add(int index, Object element) {
        size++;
        Object[] tmp = new Object[size];
        for (int i=0; i<index; i++)
            tmp[i]=arr[i];
        tmp[index]=element;
        index++;
        for (int i=index; i<size; i++)
            tmp[i]=arr[i-1];
        arr = tmp;
    }

    public Object removeAt(int index) {
        Object del = arr[index];
        size--;
        Object[] tmp = new Object[size];
        for (int i=0; i<index; i++)
            tmp[i]=arr[i];
        for (int i=index;i<size;i++)
            tmp[i]=arr[i+1];
        arr=tmp;
        return del;
    }

    public int indexOf(Object o) {
        int index=-1;
        for (int i=0; i<size;i++)
            if (arr[i].equals(o)){
                index=i;
                return index;}
        return index;
    }

    public int lastIndexOf(Object o) {
        int index=-1;
        for (int i=0; i<size;i++){
            if (arr[i]==o)
                index=i;}
            return index;
    }

    public Object get(int index){
        return arr[index];
    }
}
