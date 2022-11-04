import java.util.ArrayList;

public class IntegerSetUpdated {
    
    ArrayList<Integer> number = new ArrayList<Integer>();

    public IntegerSetUpdated() {
    }

    public IntegerSetUpdated(ArrayList<Integer> number) {
        for (int i=0; i<number.size(); i++) {
            this.number.add(number.get(i));
        }
    }

    public ArrayList<Integer> getNumber() {
        return number;
    }


    
    public IntegerSetUpdated union(IntegerSetUpdated set) {
        ArrayList<Integer> unionArray = new ArrayList<Integer>();

        for (int i=0; i<this.number.size(); i++) {
            unionArray.add(this.number.get(i));
        }

        for (int i=0; i<set.getNumber().size(); i++) {
            if (!(this.number.contains(set.getNumber().get(i)))) {
                unionArray.add(set.getNumber().get(i));
            }
        }

        return new IntegerSetUpdated(unionArray);
    }



    public IntegerSetUpdated intersection(IntegerSetUpdated set) {
        ArrayList<Integer> intersectArray = new ArrayList<Integer>();

        for (int i=0; i<set.getNumber().size(); i++) {
            if (this.number.contains(set.getNumber().get(i))) {
                intersectArray.add(set.getNumber().get(i));
            }
        }

        return new IntegerSetUpdated(intersectArray);
    }

    public void insertElement(int num) {
        number.add(num);
    }

    public void deleteElement(int num) {
        number.remove(num);
    }

    public String toString() {
        String result = "";
        for (int i=0; i<this.number.size(); i++) {
                result += Integer.toString(this.number.get(i)) + " ";
        }

        if (result.equals("")) {
            return "-";
        }
        else {
            return result;
        }
    }
}


