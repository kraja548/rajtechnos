/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package github;

import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author RAJA
 */
public class Handshake 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        long[] ip=new long[T];
        for(int i=0;i<T;i++)
        {
            ip[i]=sc.nextLong();
        }
        for(int i=0;i<T;i++)
        {
            handshakeCount(ip[i]);            
        }                
    }

    private static void handshakeCount(long ip) 
    {
        BigInteger numer=fact(ip);               
        BigInteger den=fact(ip-2).multiply(fact(2));        
        System.out.println(numer.divide(den));                                
    }

    private static BigInteger fact(long ip) 
    {
       if(ip==0||ip==1)
           return BigInteger.valueOf(1);
       else{
       BigInteger facts = BigInteger.valueOf(1);
       for (int i = 1; i <= ip; i++)
            facts = facts.multiply(BigInteger.valueOf(i));
       return facts;}
    }
}
