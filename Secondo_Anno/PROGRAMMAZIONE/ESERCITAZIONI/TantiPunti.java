import java.util.Scanner;

public class TantiPunti {
    
    public static void main(String[] args) {

        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("INSERISCI LE COORDINATE DEL PUNTO A SEPARATE DA SPAZIO ED EVENTUALE PUNTO [nn.nn]");
            Punto a = new Punto(scanner.nextDouble(), scanner.nextDouble());
            System.out.println("INSERISCI LE COORDINATE DEL PUNTO B SEPARATE DA SPAZIO ED EVENTUALE PUNTO [nn.nn]");
            Punto b = new Punto(scanner.nextDouble(), scanner.nextDouble());

            System.out.println("\nLa distanza tra A e B è " + a.distance(b));

            System.out.println("\nIl punto medio tra A e B è \n" + a.mediumPoint(b));

            System.out.println(a.equals(b) ? "\nE' uguale" : "\nNon è uguale");
        }
    }
}
