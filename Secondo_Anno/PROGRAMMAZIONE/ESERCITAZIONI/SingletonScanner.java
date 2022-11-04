import java.util.Scanner;

public class SingletonScanner {

    private static SingletonScanner instance;
    private Scanner scannerKeyboard;

    private SingletonScanner() { 
        scannerKeyboard = new Scanner(System.in); 
    }

    public static SingletonScanner getInstance() {
        if (instance == null) {
            instance = new SingletonScanner();
        }

        return instance;
    }

    public String next() {
        String string = scannerKeyboard.next();
        return string;
    }

    public int nextInt() {
        int string = scannerKeyboard.nextInt();
        return string;
    }
}