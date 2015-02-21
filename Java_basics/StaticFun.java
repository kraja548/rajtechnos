/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package basics;

/**
 *
 * @author raja
 */
public class StaticFun 
{
    public static void main(String args[])
    {
        System.out.println("value"+fun());
      
    }
    private static int fun()
    {
        
        return 10;   
    }
    public int myfun()
    {
        int k=fun();
        return k;
    }

    private int myfun1() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
}
