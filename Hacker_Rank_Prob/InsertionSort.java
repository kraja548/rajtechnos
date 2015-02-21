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
 */
public class InsertionSort 
{
    public static void main(String[] args) 
    {
        Scanner in=new Scanner(System.in);
        int N=in.nextInt();
        int[] arr=new int[N];
        for(int i=0;i<N;i++)
        {
            arr[i]=in.nextInt();
        }
        iSort(arr);
    }

    private static void iSort(int[] arr) 
    {
        for(int i=1;i<arr.length;i++)
        {
            int mark=i;
            int value=arr[i];
            while(mark>0 && arr[mark-1]>value)
            {
                arr[mark]=arr[mark-1];
                mark--;
            }
            arr[mark]=value;
            for(int j=0;j<arr.length;j++)
            {
                System.out.print(arr[j]+" ");
            }
            System.out.println();
        }
        
        
    }
}
