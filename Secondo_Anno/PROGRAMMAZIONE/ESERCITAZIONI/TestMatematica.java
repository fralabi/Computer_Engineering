public class TestMatematica {
    
    public static void main(String[] args) {
        Calcolatrice miaCalcolatrice = new Calcolatrice();

        double[] v1 = miaCalcolatrice.generaVettore(3);
        double[] v2 = miaCalcolatrice.generaVettore(3);
        double[] v3 = miaCalcolatrice.generaVettore(5);

        double[] v1plusv2 = miaCalcolatrice.sommaVettori(v1, v2);
        double[] v1plusv3 = miaCalcolatrice.sommaVettori(v1, v3);
        double[] v1conv3 = miaCalcolatrice.concatenaVettori(v1, v3);

        System.out.println("v1 plus v2: ");
        miaCalcolatrice.stampaVettore(v1plusv2);
        System.out.println("\nv1 plus v3: ");
        miaCalcolatrice.stampaVettore(v1plusv3);
        System.out.println("\nv1 concatenate v3: ");
        miaCalcolatrice.stampaVettore(v1conv3);

        double[][] m1 = miaCalcolatrice.generaMatrice(3, 5);
        double[][] m2 = miaCalcolatrice.generaMatrice(3, 5);
        double[][] m3 = miaCalcolatrice.generaMatrice(3, 5);

        double[][] m1plusm2 = miaCalcolatrice.sommaMatrici(m1, m2);
        double[][] m1plusm3 = miaCalcolatrice.sommaMatrici(m1, m3);

        System.out.println("\nm1 plus m2: ");
        miaCalcolatrice.stampaMatrice(m1plusm2);
        System.out.println("\nm1 plus m3: ");
        miaCalcolatrice.stampaMatrice(m1plusm3);

    }
}
