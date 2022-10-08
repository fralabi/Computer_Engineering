public class Rettangolo {
    
    int latoLungo;
    int latoCorto;

    public Rettangolo() {

    }

    public Rettangolo(int ll, int lc) {
        latoCorto = lc;
        latoLungo = ll;
    }

    public int perimetro() {
        return latoCorto*2+latoLungo*2;
    }

    public int area() {
        return latoCorto*latoLungo;
    }
}
