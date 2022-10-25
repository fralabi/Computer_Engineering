public class Persona {

    public String nome;
    public String cognome;
    public int eta;

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

    public String toString() {
        return "Mi chiamo " + nome + " " + cognome + " ed ho " + eta + " anni";
    }

    public void equals(Persona persona) {
        if (this.nome.equals(persona.nome) && this.cognome.equals(persona.nome) && this.eta == persona.eta) {
            System.out.println("SIAMO UGUALI");
        }
        else {
            System.out.println("NON SIAMO UGUALI");
        }
    }
    
}
