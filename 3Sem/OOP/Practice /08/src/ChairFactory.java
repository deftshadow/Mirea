public class ChairFactory implements AbstractChairFactory {
    @Override
    public VictorianChair createVictorianChair() {
        VictorianChair victorianChair = new VictorianChair(40);
        return victorianChair;
    }

    @Override
    public MagicChair createMagicChair() {
        MagicChair magicChair = new MagicChair();
        return magicChair;
    }

    @Override
    public FunctionalChair createFunctionalChair() {
        FunctionalChair functionalChair = new FunctionalChair();
        return functionalChair;
    }
}