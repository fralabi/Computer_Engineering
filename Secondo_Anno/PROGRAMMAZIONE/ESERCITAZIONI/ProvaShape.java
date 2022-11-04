public class ProvaShape {
    

    public static void main(String[] args) {
        Circle cerchio = new Circle("blue", true, 5);
        Rectangle rettangolo = new Rectangle("red", false, 4, 5);
        Square quadrato = new Square("green", false, 7);

        System.out.println(cerchio);
        System.out.println(cerchio.area());
        System.out.println(cerchio.perimeter());

        System.out.println(rettangolo);
        System.out.println(rettangolo.area());
        System.out.println(rettangolo.perimeter());

        System.out.println(quadrato);
        System.out.println(quadrato.area());
        System.out.println(quadrato.perimeter());
    }
}
