import java.util.ArrayList;

public class ProvaIntegerSetUpdated {
    
    public static void main(String args[]) {
        ArrayList<Integer> num1 = new ArrayList<Integer>();
        ArrayList<Integer> num2 = new ArrayList<Integer>();

        for (int i=0; i<100; i = i+2) {
            num1.add(i);
        }

        for (int i=0; i<100; i = i+3) {
            num2.add(i);
        }

        IntegerSetUpdated IS1 = new IntegerSetUpdated(num1);
        IntegerSetUpdated IS2 = new IntegerSetUpdated(num2);

        System.out.println(IS1);
        System.out.println(IS2);

        IntegerSetUpdated IS3 = new IntegerSetUpdated();
        IS3 = IS1.union(IS2);

        System.out.println(IS3);

        IntegerSetUpdated IS4 = new IntegerSetUpdated();
        IS4 = IS1.intersection(IS2);

        System.out.println(IS4);
    }
}
