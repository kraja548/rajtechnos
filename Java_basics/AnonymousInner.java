/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package basics;

/**
 *
 * @author RAJA
 */
public class AnonymousInner 
{
    public void fun(){
        System.out.println("class");
    }
    public static void main(String[] args){
        AnonymousInner a1=new AnonymousInner(){
            public void fun(){
                 System.out.println("main");
    }
        };
        a1.fun();
    }
}
