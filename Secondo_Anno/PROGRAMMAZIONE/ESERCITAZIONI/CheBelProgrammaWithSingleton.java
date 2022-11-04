import java.util.ArrayList;

public class CheBelProgrammaWithSingleton {
    
    public static void main(String[] args) {

        ArrayList<Persona> gruppo = new ArrayList<>();

        char response;
        int intResponse;

        SingletonScanner scanner = SingletonScanner.getInstance();
        
            do {
                menu();
                response = scanner.next().charAt(0);
                intResponse = response;

                switch(response) {
                    case 97: {
                        System.out.println("Inserire il nome: ");
                        String nome = scanner.next();
                        System.out.println("Inserire il cognome: ");
                        String cognome = scanner.next();
                        System.out.println("Inserire l'età: ");
                        int eta = scanner.nextInt();
                        Persona nuova = new Persona(nome, cognome, eta);
                        gruppo.add(nuova);
                        System.out.print("\n");
                        break;
                    }
                    case 98: {
                        System.out.println("Inserire il nome da cercare");
                        String nome = scanner.next();

                        //CON FOR
                        /*boolean found = false;
                        for (Persona persona: gruppo) {
                            if(persona.getNome().equals(nome)) {
                                System.out.println(persona);
                                found = true;
                            }
                        }
                        if (!found) {
                            System.out.println("Non ho trovato nessun " + nome + " nella mia lista\n");
                        }
                        */

                        //OVERRIDE CONTAINS
                        if (gruppo.contains(new Persona(nome, "",0))) {
                            System.out.println("Ho trovato una persona di nome " + nome + " nella mia lista\n");
                        }
                        else {
                            System.out.println("Non ho trovato nessun " + nome + " nella mia lista\n");
                        }
                        break;
                    }
                    case 99: {
                        for (Persona persona: gruppo) {
                            System.out.println(persona);
                        }
                        System.out.print("\n");
                        break;
                    }
                    case 100: {
                        gruppo.clear();
                        System.out.println("Ho cancellato l'intera lista\n");
                        break;
                    }
                    case 101:
                        System.out.println("BYE BYE");
                        break;
                }


            } while(intResponse != 101);

        System.out.println("FINE PROGRAMMA");

    }

    public static void menu() {
        System.out.println("MAKE YOUR CHOICE");
        System.out.println("[a] Inserire una nuova persona");
        System.out.println("[b] Cercare una persona in base al nome");
        System.out.println("[c] Stampare l'intera lista");
        System.out.println("[d] Cancellare l'intera lista");
        System.out.println("[e] Uscire dal programma");
    }
}
