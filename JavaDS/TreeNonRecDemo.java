/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package datastuctures;

import java.util.Scanner;

/**
 *
 * @author RAJA
 */
public class TreeNonRecDemo 
{
    public static void main(String...args)
    {
        TreeNoRec tree=new TreeNoRec();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number of elements");
        int n=sc.nextInt();
        System.out.println("Enter the elements in the tree");
        for(int i=0;i<n;i++)
        {
            int val=sc.nextInt();
            tree.insertNode(val);
        }
        System.out.println("Pre-Order Traversal:");
        tree.preOrderTraverse();
        System.out.println("\nIn-Order Traversal:");
        tree.inOrderTraverse();
        System.out.println("\nPost-Order Traversal:");
        tree.postOrderTraverse();
    }
}
