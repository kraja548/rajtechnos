/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package myprog;

import java.util.Scanner;

/**
 *
 * @author raja
 */
public class QS1 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int[] ar=new int[N];
        for(int i=0;i<N;i++)
        {
            ar[i]=sc.nextInt();
        }
        int start=0,end=N;
        part(ar, start, end-1); 
    }

    private static void part(int[] ar, int start, int end)
    {
        int pivot=ar[start];
        int pindex=end;
        
        for(int i=end;i>=start;i--)
        {
            if(ar[i]>pivot)
            {                
                swap(ar,pindex,i);
                pindex--;                
            }            
        }
        swap(ar,pindex,start);
        System.out.println(ar[pindex]+","+ar[start]);
        for(int i=0;i<=end;i++)
            System.out.print(ar[i]+" ");   
    }

    private static void swap(int[] ar, int a1, int a2) 
    {
        int temp=ar[a1];
        ar[a1]=ar[a2];
        ar[a2]=temp;
    } 
}
