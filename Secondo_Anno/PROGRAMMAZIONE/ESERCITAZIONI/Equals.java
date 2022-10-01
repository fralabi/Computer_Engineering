public class Equals {
    
    public static void main(String[] args) {
        String s = "Ciao";
        int cont = 0;

        for(int i=0; i<args.length; i++) {
            if (s.equals(args[i])) {
                cont++;
            }
        }

        System.out.println("Hai inserito " + cont + " parole uguali alla parola " + s);
    }
}
