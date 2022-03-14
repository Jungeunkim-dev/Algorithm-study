import java.util.*;

import java.util.*;

// 최종 작성 코드
public class Main{

  public static int returnSum(int num){
    String n = String.valueOf(num);
    int sum=num;
    char[] digit = n.toCharArray();
    for(int i=0; i<digit.length; i++){
      sum+=digit[i]-'0'; // char 형에서 다시 int 형으로 변환하기 위해, -'0' 방식 사용
    }
    return sum;
  }

  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);

    int N = sc.nextInt();
    int finalSum=0;

    for(int i=0;i<N;i++){
      if(returnSum(i)==N){ // 리턴 방식 간단히
        finalSum=i;
        break;
      }
    }

    System.out.print(finalSum);

  }
}



/*  1차 작성 코드
🔥 오답이유
1. char 형에서 int 형 변환하지 않아서 오류

public class Main{

  public static int returnSum(int num){
    String n = String.valueOf(num);
    int sum=num;
    char[] digit = n.toCharArray();
    for(int i=0; i<digit.length; i++){
      sum+=digit[i]; 💣
    }
    return sum;
  }

  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);

    int N = sc.nextInt();
    int finalSum=0;

    for(int i=0;i<N;i++){
      if(returnSum(i)>N) break;
      if(returnSum(i)==N) finalSum=i;
    }

    if(finalSum!=0) System.out.print(finalSum);
    else System.out.print(0);

  }
}
 */
