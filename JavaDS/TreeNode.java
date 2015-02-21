/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package datastuctures;

/**
 *
 * @author RAJA
 */
public class TreeNode 
{
    TreeNode leftNode;
    TreeNode rightNode;
    int data;
    public TreeNode(int newData)
    {
        data=newData;
        leftNode=rightNode=null;       
    }
    public void insert(int newValue)
    {
        if(newValue<data)
        {
            if(leftNode==null)
            {
            leftNode=new TreeNode(newValue);
            }        
            else
            {
            leftNode.insert(newValue);
            }
        }
        if(newValue>=data)
        {
            if(rightNode==null)
            {
                rightNode=new TreeNode(newValue);
            }
            else
            {
                rightNode.insert(newValue);
            }
        }
    }
}
