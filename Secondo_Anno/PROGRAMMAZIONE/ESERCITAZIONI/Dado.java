public class Dado {

    public Dado() {
    }
    
    public int lancia() {
        return (int)(Math.random() * 6) + 1;
    }
}
