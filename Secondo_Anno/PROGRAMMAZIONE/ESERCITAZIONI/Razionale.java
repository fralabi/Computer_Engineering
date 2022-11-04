public class Razionale {

    //GESTIONE DELLA MOLTEPLICITA' DEI TERMINI DA GESTIRE

    private int numeratore;
    private int denominatore;

    static int gcd(int a, int b)
    {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }
     
    // method to return LCM of two numbers
    static int lcm(int a, int b)
    {
        return (a / gcd(a, b)) * b;
    }

    public Razionale() {}

    public Razionale(int numeratore, int denominatore) {
        this.denominatore = denominatore;
        this.numeratore = numeratore;
    }

    public int getNumeratore() {
        return this.numeratore;
    }

    public void setNumeratore(int numeratore) {
        this.numeratore = numeratore;
    } 

    public int getDenominatore() {
        return this.denominatore;
    }

    public void setDenominatore(int denominatore) {
        this.denominatore = denominatore;
    }

    public Razionale sum (Razionale otherNumber) {
        Razionale sum;
        int leastcm = lcm(this.denominatore,otherNumber.getDenominatore());
        sum = new Razionale(
            (int) (this.numeratore*(leastcm/this.denominatore)+otherNumber.getNumeratore()*(leastcm/otherNumber.getDenominatore())),
            (int) leastcm
        );
        return sum;
    }

    public Razionale sub (Razionale otherNumber) {
        Razionale sub;
        int leastcm = lcm(this.denominatore,otherNumber.getDenominatore());
        sub = new Razionale(
            (int) (this.numeratore*(leastcm/this.denominatore)-otherNumber.getNumeratore()*(leastcm/otherNumber.getDenominatore())),
            (int) leastcm
        );
        return sub;
    }

    public Razionale mul (Razionale otherNumber) {
        Razionale mul;
        mul = new Razionale(
            (int) (this.numeratore*otherNumber.getNumeratore()),
            (int) (this.denominatore*otherNumber.getDenominatore())
        );
        return mul;
    }

    public Razionale div (Razionale otherNumber) {
        Razionale div;
        div = new Razionale(
            (int) (this.numeratore*otherNumber.getDenominatore()),
            (int) (this.denominatore*otherNumber.getNumeratore())
        );
        return div;
    }

    public String toString() {
        return this.numeratore + "/" + this.denominatore;
    }

    //VEDERE SE SONO MULTIPLI
    /*public boolean equals(Razionale otherNumber) {
        if(this.numeratore) {
            return true;
        }
        else {
            return false;
        }
    }*/


    
}
