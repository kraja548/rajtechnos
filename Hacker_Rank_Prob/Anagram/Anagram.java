/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package github;

/**
 *
 * @author RAJA
 */
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Set;
import java.util.TreeMap;

/**
 *
 * @author admn
 */
public class Anagram 
{
    public static void main(String args[]) throws FileNotFoundException, IOException
    {        
        String file;
        InputStreamReader input = new InputStreamReader(System.in);
        BufferedReader reader = new BufferedReader(input);
        file = reader.readLine();
        HashMap<String, ArrayList<String>> allText = new HashMap<String, ArrayList<String>>();
        HashMap<String, String> outPut = new HashMap<>();
        //Set set = allText.entrySet();
        //Iterator i = set.iterator();
        
        BufferedReader br = new BufferedReader(new FileReader(file));
        String line;
        while ((line = br.readLine()) != null) 
        {
            String[] words = line.split(" ");
            for(String word:words)
            {
                if (word.charAt(word.length()-1)=='.' || word.charAt(word.length()-1)==','||word.charAt(word.length()-1)=='?'||word.charAt(word.length()-1)=='!'||word.charAt(word.length()-1)==' ')
                {
                    word = word.replace(word.substring(word.length()-1), "");                    
                }                
                if(word.length()>3)
                {
                    String sort=alfabetOrder(word);
                    ArrayList<String> anagram=allText.get(sort);
                    if(anagram==null)
                        anagram=new ArrayList<String>();               

                    if(!anagram.contains(word))
                    {
                        anagram.add(word);
                    }           
                        allText.put(sort, anagram);
                }
               
                
            }
        }
        Set<String> keys = allText.keySet();
        TreeMap tm=new TreeMap();
        for(String key: keys)
        {
            String allwords;
            allwords = allText.get(key).toString();
            String delim="[ ]";
            String[] tokens=allwords.split(delim);            
            String value="";
            if(tokens.length>1)
            {
                Arrays.sort(tokens);
                //System.out.println(allText.get(key));
                //String value="";
                for(int k=0;k<tokens.length;k++)
                {
                    tokens[k]=tokens[k].replaceAll("[^a-zA-Z]+","");
                    value+=tokens[k];
                    System.out.print(tokens[k]);
                    if(k!=tokens.length-1){
                         value+=',';
                        System.out.print(",");
                    }
                }
                System.out.println();
                tm.put(value,tokens.length);
            }
            
         
        }  
        System.out.println(tm);
    }
    static String alfabetOrder(String str)
    {            
        str=str.toLowerCase();
        char[] chars = str.toCharArray();
        Arrays.sort(chars);
        String sorted = new String(chars);       
        return sorted;
    }
    
}
