public class TestDado {
    
    public static void main(String[] args) {

        Dado dado = new Dado();
        Dado dado2 = new Dado();

        System.out.println("Controllo se il dado funziona");
        for (int i=0; i<10; i++) {
            System.out.println(dado.lancia());
        }

        int[] combinazioni = new int[12];


        for (int i=0; i<12; i++) {
            combinazioni[i] = 0;
        }

        System.out.println("\n\nQuante volte su 100 la somma tra due dadi fa 12?");
        for (int i=0; i<100; i++) {
            
            int result = dado.lancia() + dado2.lancia();
            combinazioni[result-1] += 1;

            if (result == 12) {
                System.out.println(result);
            }
        }

        System.out.println("\n\nProbabilità delle combinazioni sulle somme di due dadi");
        for (int i=0; i<12; i++) {
            System.out.println("Combinazioni per somma = " + (i+1) + " -> " + combinazioni[i]);
        }

    }
}
