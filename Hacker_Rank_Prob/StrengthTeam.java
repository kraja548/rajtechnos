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
public class StrengthTeam 
{
    public static void main(String[] args) 
    {
        Scanner in=new Scanner(System.in);
        int N=in.nextInt();
        int M=in.nextInt();
        String[] p=new String[M];        
        for(int i=0;i<N;i++)
        {
            p[i]=in.next();                
        }        
        int k=0,i;
        int max=0;
        int flag=0;
        for(i=0,k=1;i<N;i++,k++)
        {
            for(int j=0;j<N-k;j++)
            {
                int count=0;
                char[] p1=p[j].toCharArray();
                char[] p2=p[j+k].toCharArray(); 
                for(int r=0;r<M;r++)
                {
                    if(!(p1[r]=='0'&& p2[r]=='0'))
                    {                    
                    count++;
                    }
                }
                if(max==count && count!=0)
                {
                    flag++;
                }
                if(max<count)
                {
                    max=count;
                }
                
            }
        }
        System.out.println(max+"\n"+flag);
    }
}
