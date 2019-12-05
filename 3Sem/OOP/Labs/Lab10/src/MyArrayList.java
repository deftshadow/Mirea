public class MyArrayList<E> {
    private int size;
    private Object[] elements;

    public MyArrayList() {
        elements = new Object[10];
        size = 0;
    }

    public void add(E e) {
        if (size < elements.length)
            elements[size] = e;
        size++;
    }

        public E get(int index) {
            if (index >= size)
            throw new IndexOutOfBoundsException("Индекс " + index + ", Size: "+ size);
            return (E)elements[index];
        }

        public int size() { return size; }
    }
