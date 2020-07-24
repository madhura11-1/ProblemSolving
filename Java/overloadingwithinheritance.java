interface A{
         public void fun1();
}
     
interface B{
         public void fun1(int k);
}

public class HelloWorld implements A,B  {
    
    public void fun1(){
         System.out.println("in A");
    }
    
    public void fun1(int k){
         System.out.println("in B");
    }
 public static void main(String []args){
        System.out.println("Hello World");
        HelloWorld abc = new HelloWorld();
        abc.fun1();
        
     }
}