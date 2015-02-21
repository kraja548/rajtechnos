/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package datastuctures;

/**
 *
 * @author RAJA
 */
public class Stack extends List
{
    public Stack()
    {
        super("Stack");
    }
    public void push(Object item)
    {
        insertAtBegining(item);
    }
    public Object pop()
    {
        return deleteBegin();
    }
    public Object top()
    {
        return getFirst();
    }
}
