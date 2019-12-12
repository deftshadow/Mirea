public class ArrayQueueADT {
    // Inv: (n >= 0) && (a[i] != null for i = 1..n - 1)
    private Object[] elements = new Object[20];
    private int size = 0;
    private int left = 0;
    private int right = 0;


    private static int dec(ArrayQueueADT que, int x) {
        if (x == 0) {
            return que.elements.length - 1;
        } else {
            return x - 1;
        }
    }

    private static int add(ArrayQueueADT que, int x) {
        return (x + 1) % que.elements.length;
    }

    private static void ensureCapacity(ArrayQueueADT que, int sz) {
        if ((que.elements.length <= sz) || (sz * 4 < que.elements.length)) {
            Object[] temp = new Object[sz * 2 + 1];
            int ind = 0;
            for (int i = que.left; i != que.right; i = add(que, i)) {
                temp[ind++] = que.elements[i];
            }
            que.elements = temp;
            que.left = 0;
            que.right = ind;
        }
    }

    public static void enqueue(ArrayQueueADT que, Object elem) {
        assert elem != null;
        ensureCapacity(que, que.size + 1);
        que.size++;
        que.elements[que.right] = elem;
        que.right = add(que, que.right);
    }

    public static Object element(ArrayQueueADT que) {
        assert que.size > 0;

        return que.elements[que.left];
    }

    public static Object equeue(ArrayQueueADT que) {
        assert que.size > 0;
        Object ans = que.elements[que.left];
        que.left = add(que, que.left);
        ensureCapacity(que, --que.size);
        return ans;
    }
    

    public static int size(ArrayQueueADT que) {
        return que.size;
    }

    public static boolean isEmpty(ArrayQueueADT que) {
        return que.size == 0;
    }

    public static void clear(ArrayQueueADT que) {
        ensureCapacity(que, 1);
        que.size = que.left = que.right = 0;
    }

    public void write() {
        assert size > 0;
        for(int i = 0; i < this.size; ++i)
        {
            System.out.print(elements[i] + " ");
        }
    }

}