public class TestRettangolo {
    
    public static void main(String args[]) {

        Rettangolo r1 = new Rettangolo(4, 5);
        Rettangolo r2 = new Rettangolo(6,6);

        System.out.println(r1.perimetro());
        System.out.println(r2.perimetro());

        System.out.println(r1.area());
        System.out.println(r2.area());
    }
}
