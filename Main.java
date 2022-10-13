import java.util.Scanner;
//12. Comment
/*12. Comment
  Ini Comment*/
/**
* 12. Comment
* Alfan Raidi Noor
* 2100018052
* A
*/
public class Main {//1. Main Program (harus sama dengan nama file)
  public static void main(String[] args) {
    // 3. Tipe data___________2. Variabel
      int a=1;
    double b=3.14;
    float k=2.4f;
    boolean c=true;
    char d='d';
	  String e="Ini Tipe String";
    
    int arr1[]={1,2,3,4};//8. Array 1D
    int arr2[][]  = { {1, 2}, {2,4} };//9. Array 2D
    
      System.out.println("Ini merupakan output tipe data");//11.Output
    System.out.println("\n  - INT : "+a);
    System.out.println("\n  - FLOAT : "+b);
    System.out.println("\n  - DOUBLE : "+k);
    System.out.println("\n  - CHAR : "+d);

    //5. IF
    if(c==true){
		System.out.println("\n - Ini merupakan output karena tipe data BOOLEAN yang bernilai TRUE");
		c=false;
		if(c==false)
			System.out.println("\n - Ini merupakan output karena tipe data BOOLEAN yang bernilai FALSE");
	}else{
	}
    //4. FOR
	System.out.println("\n - Ini FOR ARRAY 1D");
	for(int i=0;i<arr1.length;i++){
		System.out.print(arr1[i]+" ");
	}
System.out.println("\n\n - Ini FOR ARRAY 1D");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			System.out.print(arr2[i][j]+" ");
		}
		System.out.println("\n");
	}
  //6. WHILE
	int l=0;
	while(l<3){
		System.out.println("\n\n - Ini WHILE");
		l++;
	}
System.out.println("\n\n");
    
	//7. DO WHILE
	l=0;
	do{
		System.out.println("\n\n - Ini DO WHILE");
		l++;
	}while(l<3);

  //10. Input
  Scanner input = new Scanner(System.in);
      System.out.println("\n\n Ini meminta input STRING ");
  String masuk2 =input.nextLine();
System.out.println("\n - Hasilnya -> "+masuk2);
  System.out.println("\n\n Ini meminta input INT");
  int masuk1= input.nextInt();
System.out.println("\n - Hasilnya -> "+masuk1);
  } 
}