import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;



public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        String n = bufferedReader.readLine();
        
        BigInteger m=new BigInteger(n);
        
        if(m.isProbablePrime(1) == true){
            System.out.println("prime");
        }
        else{
            System.out.println("not prime");
        }
        
        bufferedReader.close();
    }
}