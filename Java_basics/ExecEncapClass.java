/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package basics;

/**
 *
 * @author RAJA
 */
public class ExecEncapClass 
{
    public static void main(String[] args){
        EncapClass ec=new EncapClass();
        ec.setName("Raja");
        ec.setRoll("13mcmb25");
        ec.setCgpa((float) 7.92);
        System.out.println("Name\t"+ec.getName()+"\n"+"Roll\t"+ec.getRoll()+"\nCGPA\t"+ec.getCgpa());
    }
}
