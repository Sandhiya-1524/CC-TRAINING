import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String arr= Scanner.next();
        int n = arr.length();
        int rot = scanner.nextInt();
        rot = rot%n;

        char[] chars = arr.tocharArray();

        while(rot -- != 0) {
            char temp = chars[0];
            for (int i=0;i<n-1; i++){
                chars[i] = chars[i+1];


            }
            chars[n-1] = temp;
        }
    }System.out.println(new String(chars));
    scanner.close();
}
