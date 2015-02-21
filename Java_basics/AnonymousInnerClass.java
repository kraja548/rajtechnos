/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package basics;

/**
 *
 * @author RAJA
 */
public class AnonymousInnerClass 
{
    int a=6;
    public static void main(String[] args){
        Anonymous as=new Anonymous()
        {
        public void read()
            {
                int a=6;
                System.out.println("from AnonymousInnerClass "+a);
            }
        };
        as.read();
        
    }
}
class Anonymous
{
    public void read(){
        System.out.println("from Anonymous");
    }
}
