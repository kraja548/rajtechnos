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
public class FindDigits 
{
    public static void main(String[] args) 
    {
        Scanner in=new Scanner(System.in);
        int T=in.nextInt();
        int[] input=new int[T];
        for(int i=0;i<T;i++)
        {
            input[i]=in.nextInt();
        }
        for(int i=0;i<T;i++)
        {
            CountIndividualDividesNumber(input[i]);
        }
    }

    private static void CountIndividualDividesNumber(int ip)
    {
        int flag=0;
        int ipvalue=ip;
        while(ip>0)
        {
            int k=ip%10;
            if(k!=0 && ipvalue%k==0)
                flag++;
            ip=ip/10;
        }
        System.out.println(flag);
    }
}
