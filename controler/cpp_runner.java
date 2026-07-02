package controler;

import java.lang.ProcessBuilder;
import java.io.BufferedReader;
import java.io.File;
import java.io.InputStreamReader;
import java.io.IOException;

public class cpp_runner{
  public cpp_runner(int initializer){
    switch(initializer){
      case(1):
        directory_checker();
      case(2):

      default:
        //TODO: do error thingy
    }
  }

  public static void directory_checker(){
    String home_dir = System.getProperty("user.dir");
    String current_dir = home_dir.concat("/controler");
    String scipt_to_run = "./reorganizer";
    
    //String command = current_dir.concat(scipt_to_run);
    String command = scipt_to_run;

    ProcessBuilder pb = new ProcessBuilder(
          command
        );
    pb.directory(new File(current_dir));
    pb.redirectErrorStream(true);
    
    //temp solution
    try{
      Process p = pb.start();

      try(BufferedReader r = new BufferedReader(new InputStreamReader(p.getInputStream()))) {
        String line;

        while((line = r.readLine()) != null){
          System.out.println(line);
        }
      }catch(IOException io){
        System.out.println("an io exception has occured");
      }

    
      int exitCode = p.waitFor();
    }catch(IOException io){
      System.out.println("Sorry an IOException has occured" + io);
    }catch(InterruptedException ie){
      System.out.println("Something happened" + ie);
    }
  } 
}
