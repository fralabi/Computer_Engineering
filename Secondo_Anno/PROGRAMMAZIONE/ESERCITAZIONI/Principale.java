import java.util.ArrayList;

public class Principale {

    public static void main(String[] args) {

        ArrayList<Persona> miaLista = new ArrayList<>();

        Persona persona1 = new Persona("James", "Gosling", 67);     //INVENTORE DI JAVA
        Persona persona2 = new Persona("Dennis", "Ritchie", 81);    //INVENTORE DI C
        Persona persona3 = new Persona("Richard", "Stallman",69);   //SOSTENITORE DEL SOFTWARE LIBERO
        Persona persona4 = new Persona("Guido","Van Rossum",66);    //INVENTORE DI PYTHON

        miaLista.add(persona1);
        miaLista.add(persona2);
        miaLista.add(persona3);
        miaLista.add(persona4);

        //Verifica la dimensione della lista col metodo size()
        System.out.println(miaLista.size());

        //Prende l'i-esimo elemento della lista col metodo get e lo stampa

        System.out.println(miaLista.get(2));

        //Elimina l'i-esimo elemento dalla lista col metodo remove
        miaLista.remove(2);

        //Stampa il contenuto dell'intera lista usando un ciclo for e il metodo size per conoscere la dimensione
        // della lista oppure usando un ciclo for migliorato ( che succede se passate l'ArrayList alla println?)
        for (Persona persona: miaLista) {
            System.out.println(persona);
        }

        /* for (int i=0; i<miaLista.size(); i++) {
            System.out.println(miaLista.get(i));
        } 
        */

        //Cancella l'intera lista col metodo clear e verifica che si sia effettivamente svuotata col metodo size
        miaLista.clear();
        System.out.println(miaLista.size());
    }
    
}
