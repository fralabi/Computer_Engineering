public class InversePrintArgs {
    public static void main(String args[]) {
        for(int i=0; i<args.length; i++) {
            System.out.println(args[args.length-i-1]);
        }
    }
}
    