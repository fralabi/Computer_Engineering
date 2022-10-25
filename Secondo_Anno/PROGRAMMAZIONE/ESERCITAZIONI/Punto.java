import java.lang.Math;

public class Punto {
    
    private double x;
    private double y;

    public Punto() {}

    public Punto(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public double getX() {
        return this.x;
    }

    public void setX(double x) {
        this.x = x;
    }

    public double getY() {
        return this.y;
    }

    public void setY(double y) {
        this.y = y;
    }

    public String toString() {
        return "X: " + this.x + "\nY: " + this.y;
    }

    public boolean equals(Punto punto) {
        if (this.x == punto.getX() && this.y == punto.getY()) {
            return true;
        }
        else {
            return false;
        }
    }

    public double distance(Punto punto) {
        return Math.sqrt(Math.pow(this.x-punto.getX(),2)+Math.pow(this.y-punto.getY(),2));
    }

    public Punto mediumPoint(Punto punto) {
        return new Punto(((this.x+punto.getX())/2),((this.y+punto.getY())/2));
    }
}
