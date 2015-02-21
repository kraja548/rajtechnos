/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package datastuctures;

/**
 *
 * @author RAJA
 */
public class StackDemo
{
    public static void main(String...args)
    {
        Stack stack=new Stack();
        Object del;
        stack.push(-1);
        stack.push(-2);
        stack.push(-3);        
        stack.push(0);
        stack.push(1);
        stack.display();
        del=stack.pop();
        System.out.println("\ndeleted item from stack is "+del);
        System.out.println("\nafter deletion of one item for stack");
        stack.display();              
    }
}
