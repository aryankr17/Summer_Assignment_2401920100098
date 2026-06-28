class Box {
    int length;
    int breadth;

    Box(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }
}

class Box3D extends Box {

    int height;

    Box3D(int l, int b, int h) {
        super(l, b);
        height = h;
    }

    int volume() {
        return length * breadth * height;
    }
}

public class Main {
    public static void main(String[] args) {

        Box b = new Box(10, 5);
        System.out.println("Area = " + b.area());

        Box3D b3 = new Box3D(10, 5, 8);
        System.out.println("Volume = " + b3.volume());
    }
}
