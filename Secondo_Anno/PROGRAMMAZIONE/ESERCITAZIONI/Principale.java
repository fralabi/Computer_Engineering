public class Principale {
    

    public static void main(String[] args) {
        Persona persona1 = new Persona("John", "Banana", 45);
        Persona persona2 = new Persona("Bobby", "Solo", 24);

        Persona persona3 = persona1;
        System.out.println(persona1.toString());
        System.out.println(persona2.toString());
        System.out.println(persona3.toString());
    }
}
