/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package datastuctures;

/**
 *
 * @author RAJA
 */
public class QueueDemo 
{
    public static void main(String...args)
    {
        Queue q=new Queue();
        Object del;
        q.enQueue(1);
        q.enQueue(2);
        q.enQueue(3);
        q.enQueue(15);        
        q.print();
        del=q.deQueue();
        System.out.println("\ndeleted item for Queue is "+del);
        System.out.println("\nafter deletion of one item for Queue");
        q.print();
    }
}
