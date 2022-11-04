public class ProvaIntegerSet {
    

    public static void main(String args[]) {
        boolean[] num1 = new boolean[100];
        boolean[] num2 = new boolean[100];

        for (int i=0; i<100; i = i+2) {
            num1[i] = true;
        }

        for (int i=0; i<100; i = i+3) {
            num2[i] = true;
        }

        IntegerSet IS1 = new IntegerSet(num1);
        IntegerSet IS2 = new IntegerSet(num2);

        System.out.println(IS1);
        System.out.println(IS2);

        IntegerSet IS3 = new IntegerSet();
        IS3 = IS1.union(IS2);

        System.out.println(IS3);

        IntegerSet IS4 = new IntegerSet();
        IS4 = IS1.intersection(IS2);

        System.out.println(IS4);
    }
}
