public class Complex {
    private int Re;
    private int Im;

    public Complex() {
        Re = 0;
        Im = 0;
    }

    public Complex(int re, int im) {
        Re = re;
        Im = im;
    }

    public void setRe(int re) {
        Re = re;
    }

    public void setIm(int im) {
        Im = im;
    }

    @Override
    public String toString() {
        return "Complex{" + "Re=" + Re + ", + Im=" + Im +  '}';
    }
}
