/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package datastuctures;

/**
 *
 * @author RAJA
 */
public class Tree 
{
    TreeNode root;
    public Tree()
    {
        root=null;
    }
    public void insertNode(int value)
    {
        if(root==null)
            root=new TreeNode(value);
        else
        {
            root.insert(value);
        }
    }
    public void preOrderTraverse()
    {
        preHelp(root);
    }
    public void preHelp(TreeNode node)
    {
        if (node==null)
            return;
        System.out.print(node.data+" ");
        preHelp(node.leftNode);
        preHelp(node.rightNode);
    }
    public void inOrderTraverse()
    {
        inHelp(root);
    }
    public void inHelp(TreeNode node)
    {       
        if (node==null)
            return;
        inHelp(node.leftNode);
        System.out.print(node.data+" ");
        inHelp(node.rightNode);
    }
     public void postOrderTraverse()
    {
        postHelp(root);
    }
    public void postHelp(TreeNode node)
    {       
        if (node==null)
            return;
        postHelp(node.leftNode);        
        postHelp(node.rightNode);
        System.out.print(node.data+" ");
    }

}
