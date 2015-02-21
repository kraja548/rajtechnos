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
public class ExceptionHandling 
{
    public static void main(String[] args)
    {
        try
        {   
            call();
            System.out.println("A");
        }catch(Exception e)
        {
            System.out.println("B");
            //System.exit(0); //finally will not be executed
        }
        finally
        {
           System.out.println("C");
        }
        System.out.println("D");
    }

    private static void call() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
        
    }
}
