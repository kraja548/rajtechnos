/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package github;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;

/**
 *
 * @author raja
 */
public class GameThrones1 
{
    public static void main(String[] args) 
    {
        Scanner in=new Scanner(System.in);
        String key=in.next();
        char[] keyarr=key.toCharArray();
        HashMap<Character,Integer> hm=new HashMap();                
        for(int i=0;i<keyarr.length;i++)
        {            
            if(hm.containsKey((Character)keyarr[i]))
            {                                   
                hm.put(keyarr[i],hm.get(keyarr[i])+1);
            }
            else
            {
                hm.put(keyarr[i],1);
            }
        }
        Set<Character> keys=hm.keySet();
        int count=0;
        for(Character k:keys)
        {
            if(hm.get(k)%2==1)
                count++;
            if(count==2)
                break;
        }
        if(count<=1)
            System.out.println("YES");
        else
            System.out.println("NO");
        
    }
}
