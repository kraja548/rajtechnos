/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package datastuctures;

/**
 *
 * @author RAJA
 */
public class Queue 
{
   private List qList;
   public Queue()
   {
       qList=new List("Queue");       
   }
   public void enQueue(Object item)
   {
       qList.insertAtEnd(item);
   }
   public Object deQueue()
   {
       return qList.deleteBegin();
   }
   public boolean isEmpty()
   {
      return qList.isEmpty();
   }
   public void print()
   {
       qList.display();
   }
}
