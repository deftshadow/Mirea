public class ConcreteFactory implements ComplexAbstractFactory {
    @Override
    public Complex createComplex() {
        Complex complex = new Complex();
        return complex;
    }

    @Override
    public Complex CreateComplex(int real, int image) {
        Complex complex = new Complex(real, image);
        return complex;
    }
}
