/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package datastuctures;

/**
 *
 * @author RAJA
 */
public class ListNode 
{
    Object data;
    ListNode nextNode;
    ListNode(Object obj)
    {
        this(obj, null);
    }
    ListNode(Object object,ListNode node)
    {
        data=object;
        nextNode=node;
    }
    Object getObject()
    {
        return data;
    }
    ListNode getNode()
    {
        return nextNode;
    }
}
