package prg.es03;

public class SommaVettori {
    public static void main(String[] args) {
        double[] vettore1 = new double[10];
        double[] vettore2 = new double[10];
        int[] result = new int[10];

        for (int i=0; i<10; i++) {
            vettore1[i] = Math.random() * 1000;
            vettore2[i] = Math.random() * 1000;
            result[i] = (int)(vettore1[i]+vettore2[i]);
            System.out.println(result[i]);
        }
    }
}

