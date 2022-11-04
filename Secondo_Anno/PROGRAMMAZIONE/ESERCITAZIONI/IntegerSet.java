public class IntegerSet {
    
    private boolean[] number = new boolean[100];

    public IntegerSet() {
        for (boolean num : number) {
            num = false;
        }
    }

    public IntegerSet(boolean[] number) {
        for (int i=0; i<100; i++) {
            this.number[i] = number[i];
        }
    }

    public boolean[] getNumber() {
        return number;
    }

    public IntegerSet union(IntegerSet set) {
        boolean[] unionArray =  new boolean[100];

        for (int i=0; i<100; i++) {

            unionArray[i] = this.number[i] || set.getNumber()[i] ? true : false;
            
            /* 
            if (this.number[i] || set.getNumber()[i]) {
                union[i] = true;
            }
            else {
                union[i]=false
            }
            */
        }

        return new IntegerSet(unionArray);
    }

    public IntegerSet intersection(IntegerSet set) {
        boolean[] unionArray =  new boolean[100];

        for (int i=0; i<100; i++) {
            unionArray[i] = this.number[i] && set.getNumber()[i] ? true : false;
        }

        return new IntegerSet(unionArray);
    }

    public void insertElement(int num) {
        this.number[num] = true;
    }

    public void deleteElement(int num) {
        this.number[num] = false;
    }

    public String toString() {
        String result = "";
        for (int i=0; i<100; i++) {
            if(number[i]) {
                result += Integer.toString(i) + " ";
            }
        }

        if (result.equals("")) {
            return "-";
        }
        else {
            return result;
        }
    }
}

