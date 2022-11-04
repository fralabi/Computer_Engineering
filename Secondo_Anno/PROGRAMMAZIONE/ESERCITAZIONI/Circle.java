public class Circle extends Shape {

    private int radius;

    public Circle() {
        super();
    }

    public Circle(String color, boolean filled, int radius) {
        super(color, filled);
        this.radius = radius;
    }

    public int getRadius() {
        return this.radius;
    }

    public void setRadius(int radius) {
        this.radius = radius;
    }

    public String toString() {
        return super.toString() + " Radius: " + this.radius;
    }

    public double area() {
        return Math.PI * this.radius * this.radius;
    }

    public double perimeter() {
        return 2 * Math.PI * this.radius;
    }
    
}
