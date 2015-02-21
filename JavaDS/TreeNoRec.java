/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package datastuctures;

/**
 *
 * @author RAJA
 */
public class TreeNoRec 
{
    TreeNode root,temp,temp1;
    Stack st=new Stack();
    public TreeNoRec()
    {
        root=null;
    }
    public void insertNode(int value)
    {
        if(root==null)
        {
            root=new TreeNode(value);
        }
        else
        {
            root.insert(value);
        }
    }
    public void preOrderTraverse()
    {
        
        preHelp(root);
    }

    private void preHelp(TreeNode node) 
    {
        while(true)
        {
            while(node!=null)
            {
                System.out.print(node.data+" ");
                st.push(node);
                node=node.leftNode;
            }
            if(st.isEmpty())
                break;
            node=(TreeNode) st.pop();
            node=node.rightNode;
        }
        
    }
   public void inOrderTraverse()
   {
       
       inHelp(root);
       
   }
    private void inHelp(TreeNode node) 
    {
        while(true)
        {
            while(node!=null)
            {
                st.push(node);
                node=node.leftNode;
            }
            if(st.isEmpty())
                break;
            node=(TreeNode) st.pop();
            System.out.print(node.data+" ");
            node=node.rightNode;            
        }
    }
    public void postOrderTraverse()
    {
        
        postHelp(root);
    }
    private void postHelp(TreeNode node) 
    {
        while(true)
        {
            if(node!=null)
            {
                st.push(node);
                node=node.leftNode;
                
            }
            else
            {
                if(st.isEmpty()){
                    
                    break;}
                else
                {                    
                    temp=(TreeNode)st.top();
                    
                    if(temp.rightNode==null)
                    {
                    
                        node=(TreeNode)st.pop();
                        System.out.println(node.data+" ");
                        temp1=(TreeNode)st.top();
                        if(node.data==temp1.rightNode.data)
                        {
                      
                            System.out.print(temp1.data+" ");
                            st.pop();
                        }
                    }
                }
                if(!st.isEmpty())
                {
                    temp=(TreeNode)st.top();
                    node=temp.rightNode;
                    
                }
                else{
                      node=null;}
                      
            }
        }
    }
}
