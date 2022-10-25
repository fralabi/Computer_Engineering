import java.util.Scanner;

public class ProgrammaInterattivo {

    public static void main(String args[]) {
        try (Scanner scanner = new Scanner(System.in)) {
            String stringa = "";

            System.out.println("Digita qualcosa e batti enter oppure scrivi \" fine \" per terminare il programma");

            String[] blacklist = {"alfa","beta","gamma", "delta","epsilon","kappa","lambda","sigma","omega"};

            while(!(stringa = scanner.next()).equals("fine")) {

                boolean cisono = false;
                for (String str :blacklist) {
                    if(str.equals(stringa)) {
                        cisono = true;
                        break;
                    }
                }

                if (!cisono) {
                    System.out.println("Hai digitato " + stringa.toUpperCase() + "!");
                }
            }
        }
        System.out.println("Fine programma!");
    }
}