/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package github;

import java.util.Scanner;

/**
 *
 * @author raja
 */
public class DuplicateCount 
{
    public static void main(String[] args) 
    {
        Scanner in=new Scanner(System.in);
        int T=in.nextInt();
        String[] allText=new String[T];
        for(int i=0;i<T;i++)
        {
            allText[i]=in.next();
        }
        for(int i=0;i<T;i++)
        {
            alterText(allText[i]);
        }
        
    }

    private static void alterText(String allText) 
    {        
        char arr[]=allText.toCharArray();
        int count=0;
        for(int i=0;i<arr.length-1;i++)
        {
            if(arr[i]==arr[i+1])
                count++;
        }
        System.out.println(count);
    }
}
