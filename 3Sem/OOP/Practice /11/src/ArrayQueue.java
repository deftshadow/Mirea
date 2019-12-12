public class ArrayQueue {
    private Object[] elements = new Object[20];
    private int size = 0;
    private int left = 0;
    private int right = 0;

    private int add(int x) {
        return (x + 1) % elements.length;
    }

    public Object element() {
        assert size > 0;
        return elements[left];
    }

    private void ensureCapacity(int sz) {
        if ((elements.length <= sz) || (sz * 4 < elements.length)) {
            Object[] temp = new Object[sz * 2 + 1];
            int ind = 0;
            for (int i = left; i != right; i = add(i)) {
                temp[ind++] = elements[i];
            }
            elements = temp;
            left = 0;
            right = ind;
        }
    }

    public void enqueue(Object elem) {
        assert elem != null;
        ensureCapacity(++size);
        elements[right] = elem;
        right = add(right);
    }

    public Object dequeue() {
        assert size > 0;
        Object ans = elements[left];
        elements[left] = null;
        left = add(left);
        ensureCapacity(--size);
        return ans;
    }

    public int size() {
        return size;
    }

    public boolean isEmpty() {
        return size == 0;
    }

    public void clear() {
        ensureCapacity(1);
        size = left = right = 0;
    }

    public void write() {
        assert size > 0;
        for(int i = 0; i < this.size; ++i)
        {
            System.out.print(elements[i] + " ");
        }
    }
}