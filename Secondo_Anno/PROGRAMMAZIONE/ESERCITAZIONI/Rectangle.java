public class Rectangle extends Shape{

    private int width;
    private int length;

    public Rectangle() {
        super();
    }

    public Rectangle(String color, boolean filled, int width, int length) {
        super(color, filled);
        this.width = width;
        this.length = length;
    }

    public int getWidth() {
        return this.width;
    }
    
    public void setWidth(int width) {
        this.width = width;
    }

    public int getLength() {
        return this.length;
    }
    
    public void setLength(int length) {
        this.length = length;
    }

    public String toString() {
        return super.toString() + " Width: " + this.width + " Length: " + this.length;
    }

    public int area() {
        return width*length;
    }

    public int perimeter() {
        return width*2 + length*2;
    }
}
