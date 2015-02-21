/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package intq;

/**
 *
 * @author raja
 */
class Base{
    int a=5;
    Base()
    {
        System.out.println("Base class");
    }
    void display()
    {
        System.out.println("from Base");
    }
}
class Child extends Base{
    Child()
    {
        int a=10;
        System.out.println("child class");        
        System.out.println("i am int a form base "+super.a);
        System.out.println("i am int a form chaild "+a);
    }
    void display()
    {
        System.out.println("from child");
    }
}
public class InheritEx {
    public static void main(String[] args)
    {
        Child ch=new Child();
        ch.display();
    }
    
}
