public class Studente {

    //CONTROLLO SUI SETTER NON FATTO PERCHE' IN MANCANZA DI EXCEPTION
    String name;
    String surname;
    Date birthdate;
    long matricola;

    public Studente() {}

    public Studente(String name,  String surname, Date birthdate, long matricola) {
        this.name = name;
        this.surname = surname;
        this.birthdate = birthdate;
        this.matricola = matricola;
    } 

    public Studente (String name, String surname, int day, int month, int year, int matricola) {
        this.name = name;
        this.surname = surname;
        this.birthdate = new Date(day, month, year);
        this.matricola = matricola;
    }

    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getSurname() {
        return this.surname;
    }

    public void setSurname(String surname) {
        this.surname = surname;
    }

    public Date getBirthdate() {
        return this.birthdate;
    }

    public void setBirthdate(Date birthdate) {
        this.birthdate = birthdate;
    }

    public long getMatricola() {
        return this.matricola;
    }

    public void setMatricola(long matricola) {
        this.matricola = matricola;
    }

    public String toString() {
        return "Sono " + this.name + " " + this.surname + "\nNato il " + this.birthdate + "\nMatricola: " + this.matricola;
    }
}