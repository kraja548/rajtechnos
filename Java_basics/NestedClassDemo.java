/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package basics;

/**
 *
 * @author RAJA
 */
public class NestedClassDemo 
{
    static int no=25;
    static String name="raja";
    String edu="M.Tech(I.T.)"; 
    static String uni="Hyderabad Central University";
    static class Nested
    {
        void method()
        {
                System.out.println("My roll no is "+no);
        }
    }
    static class Nested1
    {
        static void method1()
        {
                System.out.println("My name is  "+name);//static class 
        }
    }
    class Nested2
    {
        void method2()
        {
            System.out.println("I am doing "+edu+" in "+uni); // non-static class can access non static or static var of outer class
        }
    }
    public static void main(String[] agrs)
    {
        NestedClassDemo.Nested obj=new NestedClassDemo.Nested();//Nested obj11=new Nested(); also accetpable
        obj.method();
        NestedClassDemo.Nested1.method1();//Nested1.method1();also accetpable
        Nested2 obj2=new NestedClassDemo().new Nested2();//we can create "obj2" like "obj" because Nested2 is non static class
        obj2.method2();
        
    }
}
