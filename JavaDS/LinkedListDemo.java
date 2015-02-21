/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package datastuctures;

/**
 *
 * @author RAJA
 */
public class LinkedListDemo 
{
    public static void main(String...args)
    {
        List list= new List();
        list.insertAtBegining(1);
        list.insertAtBegining(0);
        list.insertAtBegining(-1);
        list.insertAtBegining(-2);
        list.insertAtEnd(2);
        list.insetInTheMiddle(25, 3);
        list.insertAtEnd(3);
        System.out.println("Deleted element is "+list.deleteBegin());
        list.deleteMiddle(2);
        list.display();
    }
}
