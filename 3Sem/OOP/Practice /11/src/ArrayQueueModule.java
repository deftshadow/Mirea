public class ArrayQueueModule {
    private static Object[] elements = new Object[20];
    private static int size = 0;
    private static int left = 0;
    private static int right = 0;

    private static int add(int x) {
        return (x + 1) % elements.length;
    }

    private static int dec(int x) {
        if (x == 0) {
            return elements.length - 1;
        } else {
            return x - 1;
        }
    }

    private static void ensureCapacity(int sz) {
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

    public static void enqueue(Object elem) {
        assert elem != null;
        size++;
        ensureCapacity(size);
        elements[right] = elem;
        right = add(right);
    }

    public static Object element() {
        assert size > 0;

        return elements[left];
    }

    public static Object dequeue() {
        assert size > 0;
        Object ans = elements[left];
        elements[left] = null;
        left = add(left);
        size--;
        ensureCapacity(size);
        return ans;
    }

    public static int size() {
        return size;
    }

    public static boolean isEmpty() {
        return size == 0;
    }

    public void clear() {
        elements = new Object[5];
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
