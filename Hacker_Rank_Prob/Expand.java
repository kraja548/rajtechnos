/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package github;

import java.util.Scanner;

/**
 *
 * @author RAJA
 * @Website http://rajtechnos.blogspot.in/
 */
public class Expand 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        String ip=sc.next();        
        expandInput(ip);
    }

    private static void expandInput(String ip) 
    {
        char[] input=ip.toCharArray();
        String output="";
        if(input[0]=='-')
        {
            System.out.println(ip);
        }
        else
        {
            for(int i=0;i<input.length;i++)
            {
                if(input[i]!='-')
                    output+=input[i];
                if(input[i]=='-')
                {                    
                    int count=(input[i-1]-input[i+1]);
                    if(count<0 && ((-count)<26||(-count)<9))
                    {
                        count=-count;
                        //int count=-(input[i-1]-input[i+1]);
                        //System.out.println(count);
                        while(count>1)
                        {
                            //System.out.println(++input[i-1]);
                            output=output+(++input[i-1]);
                            count--;
                        }
                    }
                    else if(count>0 && ((count)<26||(count)<9))
                    {                        
                        //System.out.println(count);
                        while(count>1)
                        {
                            //System.out.println(++input[i-1]);
                            output=output+(--input[i-1]);
                            count--;
                        }
                    }
                    else
                    {
                        output=output+'-';
                    }
                }
            }
            System.out.println(output);
        }
    }
}
