/*
 * Try static(shadowling),private(can't override),public(can be override) keywords for the function.
 * static - A's fun
 * no keyword - B's fun
 * private - error
 * public - B's fun
 */
package intq;

/**
 *
 * @author raja
 */
class A {

    static void fun() { //if remove static then B's fun will be printed(but remove static at both classes)
        System.out.println("A's fun");
    }
}

class B extends A {

    static void fun() {
        System.out.println("B's fun");
    }
}

public class Shadowing {

    public static void main(String[] args) {
        A a = new B();
        a.fun();
    }
}
