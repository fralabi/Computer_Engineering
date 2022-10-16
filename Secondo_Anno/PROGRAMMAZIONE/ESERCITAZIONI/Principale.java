public class Principale {
    

    public static void main(String[] args) {
        //COSTRUTTORE NORMALE
        Persona persona1 = new Persona("John", "Banana", 45);
        Persona persona2 = new Persona("Bobby", "Solo", 24);

        Persona persona3 = persona1;
        System.out.println(persona1.toString());
        System.out.println(persona2.toString());
        System.out.println(persona3.toString());
        
        //COSTRUTTORE VUOTO
        Persona persona4 = new Persona();
        Persona persona5= new Persona();
        
        persona4.nome = "John";
        persona4.cognome = "Banana";
        persona4.eta = 45;
        
        persona5.nome = "Bobby";
        persona5.cognome = "Solo";
        persona5.eta = "24";

        Persona persona6 = persona4;
        System.out.println(persona4.toString());
        System.out.println(persona5.toString());
        System.out.println(persona6.toString());
    }
}
