public class Shape {
    private String color;
    private boolean filled;

    public Shape() {
    }

    public Shape(String color, boolean filled) {
        this.color = color;
        this.filled = filled;
    }

    public String getColor() {
        return this.color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public boolean getFilled() {
        return this.filled;
    }

    public void setFilled(boolean filled) {
        this.filled = filled;
    }

    public String toString() {
        if (this.filled) {
            return "Color: " + this.color + " Filled: " + this.filled;
        }
        else {
            return "Color: " + this.color + " Filled: " + this.filled;
        }
    }
}
