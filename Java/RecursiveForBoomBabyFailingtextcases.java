public class Solution {
      static long cycles = 0;
      static int flag = 0;
    
       private static void method1(long l,long r){
            if(l<=1 && r<=1){
                if(l ==1 && r == 1){
                  flag = 1;
                  return;
                }
                else if(l <=0 || r <= 0){
                    flag = 0;
                    return;
                }
            }
            else if(l == r && l != 1){
                flag = 0;
                return;
            }
            else{
                 if(l<r)
                  r = r-l;
                 else
                  l = l-r;
                  cycles++;
                  method1(l,r);
            }
        }
    
    
    public static String solution(String x, String y) {
        long l = Long.parseLong(x);
        long r = Long.parseLong(y);
        if(l == r && l != 1)
        return "impossible";
        else{
        method1(l,r);
        if(flag == 1){
            String q = Long.toString(cycles);
            return q;
        }
        if(flag == 0)
        return "impossible";
        }
        
        
    }
}