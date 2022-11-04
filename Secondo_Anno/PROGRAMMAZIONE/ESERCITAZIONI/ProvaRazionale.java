import java.util.Scanner;

public class ProvaRazionale {

    public static void main(String[] args){

        try(Scanner scanner = new Scanner(System.in)) {
            System.out.println("INSERISCI IL NUMERATORE E DENOMINATORE SEPARATE DA SPAZIO [nn nn]");
            Razionale num1 = new Razionale(scanner.nextInt(),scanner.nextInt());
            System.out.println("INSERISCI IL NUMERATORE E DENOMINATORE SEPARATE DA SPAZIO [nn nn]");
            Razionale num2 = new Razionale(scanner.nextInt(),scanner.nextInt());

            System.out.println(num1.sum(num2));
            System.out.println(num1.sub(num2));
            System.out.println(num1.mul(num2));
            System.out.println(num1.div(num2));
        }
    }
    
}
