/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package myprog;

import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author raja
 */
public class QuickSort 
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
        qSort(ar, start, end-1,N);        
    }

    private static int partition(int[] ar,int start, int end,int N) 
    {
        int pivot=ar[end];
        int pindex=start;
        int[] newar=new int[N];
        for(int i=0;i<N;i++)
                newar[i]=ar[i];
        for(int i=start;i<end;i++)
        {
            if(ar[i]<pivot)
            {
                swap(ar,pindex,i);
                pindex++;                
            }            
        }
        swap(ar,pindex,end);        
        if(!(Arrays.equals(newar,ar)))
        {
            for(int i=0;i<N;i++)
                System.out.print(ar[i]+" ");
            System.out.println();
        }
        return pindex;
    }

    private static void qSort(int[] ar, int start, int end,int N) 
    {
        if(start<=end)
        {            
            int mid=partition(ar,start,end,N);
            qSort(ar,start,mid-1,N);            
            qSort(ar,mid+1,end,N);
            
        }
    }

    private static void swap(int[] ar,int a1, int a2) 
    {
        int temp=ar[a1];
        ar[a1]=ar[a2];
        ar[a2]=temp;
        
    }
}
