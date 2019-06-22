import java.util.Scanner;
public class paixu
{
 public void jiangxu(int[] a,int m,int n)
 {
  if(m>0)
  {
   if(a[n]>a[n-1])
   {
    xuanze(a,n);
   }

   if(n>=m)
   {
    jiangxu(a,m-1,1);
   }
   else
   {
    jiangxu(a,m,n+1);
   }
  }
 }

 void xuanze(int[] array,int k)
 {
  int temp = array[k];
   array[k] = array[k-1];
   array[k-1]= temp;
 }

 public void show(int[]array)
 {
  for(int i = 0;i<array.length;i++)
  {
   System.out.println(array[i]);
  }
 }

 public static void main(String[] args) 
 {
	 int i;
  paixu digui = new paixu();
  Scanner in =new Scanner(System.in);
	int n=in.nextInt();
  int a[] = new int[n];
  for(i=0;i<n;i++)
  {
	  Scanner in1 =new Scanner(System.in);
		a[i]=in1.nextInt();
  }
  digui.jiangxu(a,a.length-1,1);
  digui.show(a);
 }
}