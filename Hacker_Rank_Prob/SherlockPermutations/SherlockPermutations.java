/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package github;

import java.math.BigInteger;
import java.text.NumberFormat;
import java.util.Scanner;

/**
 *
 * @author KRRNaidu
 */
public class SherlockPermutations 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        long[][] ip=new long[T][2];
        for(int i=0;i<T;i++)
        {
            ip[i][0]=sc.nextLong();
            ip[i][1]=sc.nextLong();
        }
        for(int i=0;i<T;i++)
        {
            resultPermutes(ip[i][0],ip[i][1]);
        }
        
    }

    private static void resultPermutes(long N, long M) 
    {
        
        long k=(N+M-1);
        BigInteger numer=fact(k);
        BigInteger denm=fact(N).multiply(fact(M-1));        
        BigInteger res=numer.divide(denm);        
        BigInteger b1=BigInteger.valueOf(10);        
        BigInteger pow=b1.pow(7);
        BigInteger mod=pow.add(BigInteger.valueOf(7));
        System.out.println(res.mod(mod));
        
        
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
