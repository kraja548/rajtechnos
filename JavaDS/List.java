/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package datastuctures;
/**
 *
 * @author RAJA
 */
public class List 
{
    private ListNode firstNode;
    private ListNode lastNode;
    String name;
    public List()
    {
        this("list");
    }
    public List(String listName)
    {
        name=listName;
        firstNode=lastNode=null;
    }
    public void insertAtBegining(Object item)
    {
        if(isEmpty())
        {
            firstNode=lastNode=new ListNode(item);
        }
        else
        {
            firstNode=new ListNode(item, firstNode);
        }
    }
    public void insertAtEnd(Object item)
    {
        if(isEmpty())
        {
            firstNode=lastNode=new ListNode(item);
        }
        else
        {
            lastNode=lastNode.nextNode=new ListNode(item);
        }
    }
    public void insetInTheMiddle(Object item,int pos)
    {
        ListNode current=firstNode;
        ListNode newNode=new ListNode(item);        
        for(int i=1;i<=pos && current.nextNode!=null;i++)
        {
            current=current.nextNode;           
        }
        newNode.nextNode=current.nextNode;       
        current=newNode;
        
    }
    public Object deleteBegin()
    {        
        if(isEmpty())
        {
            System.out.println("List is empty");
            return 0;
        }
        Object removed=firstNode.data;
        if(firstNode==lastNode)
        {
            firstNode=lastNode=null;
        }
        else
        {
        firstNode=firstNode.nextNode;
        }
        return removed;
    }
    public Object deleteEnd()
    {
        if(isEmpty())
        {
            System.out.println("List is empty");
            return 0;
        }
        Object removed=lastNode.data;
        if(firstNode==lastNode)
        {
            firstNode=lastNode=null;
        }
        else
        {
            ListNode current1=firstNode;
            while(current1!=lastNode)
            {
                current1=current1.nextNode;
            }
            lastNode=current1;
            current1.nextNode=null;            
        }
        return removed;
    }
    public Object deleteMiddle(int pos)
    {
       if(isEmpty())
        {
            System.out.println("List is empty");
            return 0;
        }
        ListNode current2=firstNode;
        ListNode prev;
        for(int i=1;i<=pos;i++)
        {
            prev=current2;
            current2=current2.nextNode;
        }
        Object removed=current2.data;
        prev=current2.nextNode;
        return removed;
    }
    public Object getFirst()
    {
        return firstNode.data;
    }
    public boolean isEmpty() 
    {
        return firstNode==null;
    }
    public void display()           
    {
        if(isEmpty())
        {
            System.out.println("List is empty");
        }
        System.out.println("*-------"+name+"-------*");
        ListNode current=firstNode;
        while(current!=null)
        {
            System.out.print(current.data+" ");
            current=current.nextNode;
        }
        
    }
}
