public class Calcolatrice {

    public Calcolatrice() {
    }

    public double[] generaVettore(int L) {
        double[] arr;
        arr = new double[L];

        for (int i=0; i<L; i++) {
            arr[i] = Math.random() * 1000;
        }

        return arr;
    }

    public double[] sommaVettori(double[] a, double[] b) {
        if (a.length == b.length) {
            double[] arr;
            arr = new double[a.length];

            for (int i=0; i<a.length; i++) {
                arr[i] = a[i]*b[i];
            }

            return arr;
        }
        else {
            return a;
        }
    }

    public double[] concatenaVettori(double[] a, double[] b) {
        double[] arr;
        arr = new double[a.length+b.length];

        System.arraycopy(a, 0, arr, 0, a.length);
        System.arraycopy(b, 0, arr, a.length, b.length);
     
        return arr;
    }

    public void stampaVettore(double[] a) {
        for (int i=0; i<a.length; i++) {
            System.out.println(a[i]);
        }
    }

    public double[][] generaMatrice(int R, int C) {
        double[][] mat;

        mat = new double[R][C];

        for (int i=0; i<R; i++) {
            for (int j=0; j<C; j++) {
                mat[i][j] = Math.random() * 100;
            }
        }

        return mat;
    }

    public double[][] sommaMatrici(double[][] a, double[][] b) {
        if (a.length == b.length && a[0].length == b[0].length) {
            double[][] mat;
            mat = new double[a.length][a[0].length];

            for (int i=0; i<a.length; i++) {
                for (int j=0; j<a[0].length; j++) {
                    mat[i][j] = a[i][j] + b[i][j];
                }
            }

            return mat;
        }
        else {
            return a;
        }
    }

    public void stampaMatrice(double[][] m) {
        for (int i=0; i<m.length; i++) {
            for (int j=0; j<m[0].length; j++) {
                System.out.println(m[i][j]);
            }
            System.out.println();
        }
    }
    
}
