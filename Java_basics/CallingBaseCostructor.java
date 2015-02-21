/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package basics;

/**
 *
 * @author RAJA
 */
class base
{
    public base()
    {
        System.out.println("Base default constructor");
    }
    public base(int n)
    {
        this();
        System.out.println("Base parameter constructor "+ n);
    }    
}
class child extends base
{
    public child()
    {        
        this(7);        
        System.out.println("child default constructor ");
    }
    public child(int n)
    {
        super(5);           
        System.out.println("child parameter constructor "+n);
    }
}
public class CallingBaseCostructor
{
   public static void main(String[] args)
   {
    base b=new child();
   }
}

