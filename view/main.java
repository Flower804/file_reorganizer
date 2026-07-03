package file_reorganizer;

import controler.cpp_runner;

import java.util.Scanner;

public class main{
  static private Scanner input = new Scanner(System.in);
  
  public static void main(String[] args){
    main_menu();
  }
  
  /**The main menu that is showen when the program is started
   *
   * 
   *
   */ 
  public static void main_menu(){
    while(true){
      System.out.println("Please select your option\n1-run directory checker");
      int choice = input.nextInt();
      input.nextLine();

      switch(choice){
        case(1):
          cpp_runner runner = new cpp_runner(1);

          break;
        default:
          System.out.println("wrong input... please try again");
      }
    }
  }

}
