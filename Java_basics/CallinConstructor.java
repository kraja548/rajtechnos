/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package basics;

/**
 *
 * @author RAJA
 */
public class CallinConstructor {

    public CallinConstructor() {
        this(25);
        System.out.println("Default");
    }

    public CallinConstructor(int n) {
        this("raja");
        System.out.println("Parameter 'int' Constructor " + n);
    }

    public CallinConstructor(String s) {
        System.out.println("Parameter 'String' Constructor " + s);
    }

    public static void main(String[] args) {
        CallinConstructor cc = new CallinConstructor();
    }
}
