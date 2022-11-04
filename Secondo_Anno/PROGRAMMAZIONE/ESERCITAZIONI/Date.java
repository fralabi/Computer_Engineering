public class Date {
    
    private int day;
    private int month;
    private int year;

    String[] months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int[] daysOfMonth = {31,28,31,30,31,30,31,31,30,31,30,31};
    public Date() {}

    public Date(int day, int year) {
        for (int i=0; i<daysOfMonth.length; i++) {
            if (day < daysOfMonth[i]) {
                this.month = i+1;
                this.day = day;
                break;
            }
            else {
                day -= daysOfMonth[i];
            }
        }
        this.year = year;
    }

    public Date(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }

    public Date(int day, String month, int year) {
        this.day = day;
        for (int i=0; i<months.length; i++ ) {
            if (month.equals(months[i])) {
                this.month = i+1;
            }
        }
        this.year = year;

    }

    public int getDay() {
        return this.day;
    }

    public void setDay(int day) {
        this.day = day;
    }

    public int getMonth() {
        return this.month;
    }

    public void setMonth(int month) {
        this.month = month;
    }

    public int getYear() {
        return this.year;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public String print1() {
        int days = 0;
        for (int i=0; i<month-1; i++) {
            days += daysOfMonth[i];
        }
        return (days+this.day) + " " + this.year;
    }

    public String print2() {
        return this.day + "/" + this.month + "/" + String.valueOf(this.year).charAt(2) + String.valueOf(this.year).charAt(3);
    }

    public String print3() {
        return this.day + " "  + months[this.month-1] + " " + this.year;
    }

    public String toString() {
        return print3();
    }

    public boolean equals(Date date) {

        /*
        if (this.day == date.getDay() &&  this.month == date.getMonth() && this.year == date.getYear()) {
            return true;
        }
        else {
            return false
        }
        */

        return (this.day == date.getDay() &&  this.month == date.getMonth() && this.year == date.getYear()) ? true : false;
    }
}
