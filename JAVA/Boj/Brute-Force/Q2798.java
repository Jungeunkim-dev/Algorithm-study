import java.util.*;

public class Main{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);

    int N=sc.nextInt();
    int M=sc.nextInt();
    int input=0;
    int max=0;

    int[] arr=new int[N];

    for(int i=0;i<N;i++){
      input=sc.nextInt();
      arr[i]=input;
    }

    for(int i=0; i<N-2; i++){
      for(int j=i+1;j<N-1;j++){
        for(int k=j+1;k<N;k++){
          if(arr[i]+arr[j]+arr[k]>max&&arr[i]+arr[j]+arr[k]<=M)
            max=arr[i]+arr[j]+arr[k];
        }
      }
    }
    System.out.print(max);
  }
}
