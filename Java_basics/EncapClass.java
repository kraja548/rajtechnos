/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package basics;

/**
 *
 * @author RAJA
 */
public class EncapClass
{
    private String roll;
    private String name;
    private float cgpa;
    public String getRoll(){
        return roll;
    }
    public String getName(){
        return name;
    }
    public float getCgpa(){
        return cgpa;
    }
    public void setRoll(String newRoll){
        roll=newRoll;
    }
    public void setName(String newName){
        name=newName;
    }
    public void setCgpa(float newCgpa){
        cgpa=newCgpa;
    }

}
