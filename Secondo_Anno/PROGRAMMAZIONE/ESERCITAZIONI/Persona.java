public class Persona {

    private String nome;
    private String cognome;
    private int eta;

    public Persona() {
    }

    public Persona(String nome, String cognome, int eta) {
        this.nome = nome;
        this.cognome = cognome;
        this.eta = eta;
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCognome() {
        return this.cognome;
    }

    public void setCognome(String cognome) {
        this.cognome = cognome;
    }

    public int getEta() {
        return this.eta;
    }

    public void setEta(int eta) {
        this.eta = eta;
    }

    @Override
    public String toString() {
        return "Mi chiamo " + nome + " " + cognome + " ed ho " + eta + " anni";
    }

    public boolean equals(Persona persona) {
        if (this.nome.equals(persona.nome) && this.cognome.equals(persona.nome) && this.eta == persona.eta) {
            return true;
        }
        else {
            return false;
        }
    }

    //https://www.geeksforgeeks.org/overriding-equals-method-in-java/
    public boolean equals(Object object) {
        
        // If the object is compared with itself then return true 
        if (object == this) {
            return true;
        }
 
        /* Check if o is an instance of Persona or not
          "null instanceof [type]" also returns false */
        if (!(object instanceof Persona)) {
            return false;
        }
         
        // Create instance of Persona
        Persona persona = (Persona) object;

        //Make the comparison of name
        return this.nome.equals(persona.nome);
    }
    
}
