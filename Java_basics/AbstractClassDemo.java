/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package basics;

/**
 *
 * @author RAJA
 */
abstract class BaseAbstractDemo
{
    abstract void studentDetails(String name, int num);
    void  marksAverage(int s1,int s2,int s3)
    {
        System.out.println("Marks Avg is "+(s1+s2+s3)/3);
    }
    
}
class ChildAbstratcDemo extends BaseAbstractDemo
{

    @Override
    void studentDetails(String name, int num) {
        System.out.println(name+"'s roll num is "+num);
    }
    
    @Override
    void marksAverage(int ss1,int ss2,int ss3)
    {
       System.out.println("aveg is"+(ss1/3 + ss2/3 + ss3/3));
    }
    
}
public class AbstractClassDemo 
{
    public static void main(String...args)
    {
        BaseAbstractDemo bae=new ChildAbstratcDemo();
        //BaseAbstractDemo bae1=new BaseAbstractDemo();//Abstract method can't be instantiated
        bae.studentDetails("santhu", 25);
        bae.marksAverage(80, 90, 75);
    }
}
