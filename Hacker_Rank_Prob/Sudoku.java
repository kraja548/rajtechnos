/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package github;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.HashMap;
import java.util.Scanner;
import java.util.Set;

/**
 * 
 * @author raja
 * @Website http://rajtechnos.blogspot.in/
 * 
 */
public class Sudoku 
{
    public static void main(String[] args) throws FileNotFoundException, IOException 
    {
        String input;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter file path");
        input=sc.next();
        String line;
        int[][] arr=new int[9][9];
        BufferedReader br=new BufferedReader(new FileReader(input));
        int count=0;
        while((line=br.readLine())!=null)
        {
            char[] chars=line.toCharArray();
            for(int i=0;i<9;i++)
            {
                arr[count][i]=chars[i]-48;
            }
            count++;
        }
        int c=isDiffInColumn(arr);
        int r=isDiffInRow(arr);
        int sm=isNoDupicates(arr);
        if(c==1 && r==1 && sm==1)
        {
            System.out.println("Valid");
        }
        else
            System.out.println("Invalid");
        
    }

    private static int isDiffInColumn(int[][] arr) 
    {
        int count=0;
        for(int k=0;k<9;k++)
        {            
            for(int i=0;i<9;i++)
            {
               for(int j=0;j<9;j++)
               {
                   if(i!=j && arr[k][i]==arr[k][j])
                       count++;
               }
            }            
        }
        if(count>0)
            return 0;
        else
            return 1;
    }

    private static int isDiffInRow(int[][] arr)
    {
        int count=0;
        for(int k=0;k<9;k++)
        {            
            for(int i=0;i<9;i++)
            {
               for(int j=0;j<9;j++)
               {
                   if(i!=j && arr[i][k]==arr[j][k])
                       count++;
               }
            }            
        }
        if(count>0)
            return 0;
        else
            return 1;
    }

    private static int isNoDupicates(int[][] arr) 
    {
        
        int rowcount=0,colcout=0,value=1,flag=0;       
        while(rowcount<8)
        {
            HashMap<Integer,Integer> submatrix=new HashMap();
            for(int i=rowcount;i<rowcount+3;i++)
            {
                for(int j=colcout;j<colcout+3;j++)
                {
                    if(submatrix.containsKey(arr[i][j]))
                    {                    
                        submatrix.put(arr[i][j],submatrix.get(arr[i][j])+1);
                    }
                    else
                    {
                        submatrix.put(arr[i][j],value);                    
                    }
                }
            }
            Set<Integer> keys = submatrix.keySet();
            for(Integer key:keys)
            {
                if(submatrix.get(key)>1)
                {
                    flag++;
                    //System.out.println(key+":"+submatrix.get(key));
                }
            }
            rowcount+=3;
        }
        if(flag>0)
            return 0;
        else            
            return 1;
    }
}
