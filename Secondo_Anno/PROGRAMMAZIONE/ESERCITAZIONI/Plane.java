public class Plane {

    private Point3D a;
    private Point3D b;
    private Point3D c;

    public Plane(int ax, int ay, int az, int bx, int by, int bz, int cx, int cy, int cz) {
        a = new Point3D(ax, ay, az);
        b = new Point3D(bx, by, bz);
        c = new Point3D(cx, cy, cz);
    }
    
}
