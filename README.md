# BadUSB
该项目利用USB协议上的漏洞，通过更改USB的内部固件，在接入USB接口后，模拟外置鼠标、键盘的功能，以此来使目标主机执行已经精心构造好的命令  

![fsociety](https://images.gitee.com/uploads/images/2021/0202/213932_6e4b146f_2323666.jpeg "src=http___static.ts.360.com_blog_wp-content_uploads_2016_08_160822-Post-fsociety-1.png&refer=http___static.ts.360.jpg")
#### QQ交流群：775942445
#### 加微信-进入交流群：wwy18795980897

#### 前言
和大多数人一样，最初见到BadUSB是在美剧《黑客军团》中，是fsociety组织常用的工具之一，无论是向服务器下载木马控制被害者主机，还是达琳在停车场帅气的扔出大量USB钓鱼，BadUSB都是功不可没的物理武器之一。  
![黑客军团](https://upload-images.jianshu.io/upload_images/11477676-71045c807dac0df6.png?imageMogr2/auto-orient/strip|imageView2/2/w/554/format/webp)<br>

#### 优势
在USB攻击领域，很多年前常用的是老式USB病毒（自动运行）autorun.inf，但文件现在已经会被杀毒软件轻易地查杀，与autorun.inf不同，BadUSB是利用了USB协议上的漏洞，通过更改USB的内部固件，在正常的USB接口接入后，模拟外置鼠标、键盘的功能，以此来使目标主机执行已经精心构造好的命令。在此过程中不会引起杀毒软件、防火墙的一丝怀疑。而且因为是在固件级别的应用，U盘格式化根本无法阻止其内部代码的执行。  
![Leonardo_Arduino](https://upload-images.jianshu.io/upload_images/11477676-847cea1424a20e07.png?imageMogr2/auto-orient/strip|imageView2/2/w/554/format/webp)<br>
我最新欢的是Leonardo_Arduino板子，因为同样是对USB的利用，Windows、Linux、MAC等各类操作系统默认存在leonardo_Arduino的USB接口驱动，不必联网下载专用的驱动程序。此外，向BadUSB烧录的程序极为简单，大部分是对键盘、鼠标按键进行模拟，上手较为容易。  
BadUSB也是社会工程学的一个典型示例，它极大地利用了人们的好奇心，在路边捡到的USB，估计九成以上的人们都想看看里面有什么东西，而当你插入个人主机或公司内网，攻击就很难再停止下来了。<br>
![BadUSB钓鱼](https://upload-images.jianshu.io/upload_images/11477676-3d1f812778254931.png?imageMogr2/auto-orient/strip|imageView2/2/w/554/format/webp)<br>

#### 教程
[视频地址](https://www.yuque.com/u12074055/cpuceb/qicml3) <br>
视频：BadUSB编译软件介绍<br>
视频：BadUSB驱动程序安装及代码写入<br>
视频：BadUSB基本操作<br>
[具体步骤请移步至简书](https://www.jianshu.com/p/2b2b1dab85fe) <br>
![操作步骤](https://upload-images.jianshu.io/upload_images/11477676-390539861bec703c.png?imageMogr2/auto-orient/strip|imageView2/2/w/554/format/webp)<br>

#### 目录导图<br>

     BadUSB<br>
     │  LICENSE<br>
     │  README.en.md<br>
     │  README.md<br>
     │    
     ├─BlueScreen蓝屏<br>
     │      BlueScreen蓝屏1（DOS）.ino<br>
     │      BlueScreen蓝屏2（DOS）.ino<br>
     │      BlueScreen蓝屏3（DOS）.ino<br>
     │      xp和win7的蓝屏代码（DOS攻击）.ino<br>
     │      延迟蓝屏（DOS）.ino<br>
     │      注册表写入致使开机蓝屏通用（DOS）.ino<br>
     │      注册表写入致使开机蓝屏（DOS）.ino<br>
     │      
     ├─CobaltStrike木马联动<br>
     │  │  BitsAdmin木马执行（与CS联动）.ino<br>
     │  │  Pl木马执行（与CS联动）.ino<br>
     │  │  PSL木马执行（与CS联动）.ino<br>
     │  │  PY木马执行（与CS联动）.ino<br>
     │  │  Regsvr32木马执行（与CS联动）.ino<br>
     │  │  
     │  ├─CobaltStrike各种语言的Payload<br>
     │  │      payload.bin<br>
     │  │      payload.c<br>
     │  │      payload.cs<br>
     │  │      payload.java<br>
     │  │      payload.pl<br>
     │  │      payload.ps1<br>
     │  │      payload.py<br>
     │  │      payload.rb<br>
     │  │      payload.sct<br>
     │  │      payload.txt<br>
     │  │      payload.vba<br>
     │  │      
     │  └─CounterStrike木马制作教程<br>
     │          CounterStrike.jpg<br>
     │          CounterStrike木马制作教程.png<br>
     │          
     ├─DNS劫持<br>
     │      DOS命令设置多个DNS（DNS劫持）.ino<br>
     │      PSL命令设置多个DNS（DNS劫持）.ino<br>
     │      
     ├─Linux内置反向Shell<br>
     │      Linux内置的反向Shell（BashShell）.ino<br>
     │      Linux反向Shell（PerlShell）.ino<br>
     │      Linux反向Shell（代码执行）.ino<br>
     │      
     ├─MSF木马联动<br>
     │      shell.apk<br>
     │      shell.asp<br>
     │      shell.aspx<br>
     │      shell.elf<br>
     │      shell.exe<br>
     │      shell.jar<br>
     │      shell.jsp<br>
     │      shell.macho<br>
     │      shell.php<br>
     │      shell.pl<br>
     │      shell.psl<br>
     │      shell.py<br>
     │      shell.sh<br>
     │      shell.war<br>
     │      Shell木马生成配置.txt<br>
     │      
     ├─OSX内置反向Shell<br>
     │      osx系统反向连接（dns_shell）.ino<br>
     │      osx系统反向连接（perl_shell）.ino<br>
     │      osx系统反向连接（ruby_shell）.ino<br>
     │      
     ├─PSL全屏HACKED画面<br>
     │  ├─FullScreenHackedv0<br>
     │  │  │  get.ps1<br>
     │  │  │  
     │  │  └─FullScreenHackedv<br>
     │  │          FullScreenHackedv.ino<br>
     │  │          
     │  ├─FullScreenHackedv2<br>
     │  │      FullScreenHackedv2.ino<br>
     │  │      wall.ps1<br>
     │  │      
     │  └─FullScreenHackedv3[慎用]<br>
     │      │  get.ps1<br>
     │      │  
     │      └─FullScreenHackedv3<br>
     │              FullScreenHackedv3.ino<br>
     │              
     ├─Ubuntu信息搜集<br>
     │      Ubuntu信息搜集到TXT文件（信息）.ino<br>
     │      Ubuntu的基本终端命令（显示）.ino<br>
     │      
     ├─WIFI密码获取<br>
     │      WIFI密码导出（工具）.ino<br>
     │      Wifi密码捕获（工具）.ino<br>
     │      
     ├─WIFI连接木马<br>
     │      强迫连接指定WIFI并下载psl木马运行（木马入侵）.ino<br>
     │      
     ├─代码原理解读<br>
     │      arduino按键代码基础.ino<br>
     │      MSF木马制作教程.txt<br>
     │      关于setup和loop方法的说明.txt<br>
     │      
     ├─木马下载器<br>
     │  ├─CERTUTIL木马下载器（木马攻击）代码<br>
     │  │      链接服务器msf木马certutil下载版.ino<br>
     │  │      
     │  ├─FTP木马下载器（木马攻击）代码<br>
     │  │      FTP下载netcat并反向连接shell（木马攻击）.ino<br>
     │  │      
     │  ├─JAVA木马写入（木马攻击）代码<br>
     │  │      java木马写入（目标环境可运行Java）.ino<br>
     │  │      server.java<br>
     │  │      
     │  ├─PSL木马下载器（木马攻击）代码<br>
     │  │      powershell下载服务器木马.ino<br>
     │  │      psl木马下载器1（木马攻击）.ino<br>
     │  │      psl木马下载器2（木马攻击）.ino<br>
     │  │      psl木马下载器3通用（木马攻击）.ino<br>
     │  │      psl木马下载器4通用（木马攻击）.ino<br>
     │  │      psl木马下载器win&linux通用（木马攻击）.ino<br>
     │  │      psl木马写入并反弹（木马攻击）.ino<br>
     │  │      下载psl木马并二次执行（木马攻击）.ino<br>
     │  │      链接服务器msf木马psl下载版.ino<br>
     │  │      链接服务器psl下载版.ino<br>
     │  │      
     │  └─PY木马下载器（木马攻击）代码<br>
     │          PyShellServer.py<br>
     │          Py木马写入（目标环境可运行Python）.ino<br>
     │          
     ├─添加用户并开启服务<br>
     │      添加用户并开启3389（工具）.ino<br>
     │      添加用户并开启ftp（工具）.ino<br>
     │      
     ├─特定功能代码<br>
     │      Alt_F4循环关闭窗口后关机（工具）.ino<br>
     │      Shift后门（工具）.ino<br>
     │      单纯改变所有用户密码（恶作剧项）.ino<br>
     │      启动PSL远程连接功能（工具）.ino<br>
     │      强制删除360各项进程（工具）.ino<br>
     │      强制执行关机ShutDown命令（工具）.ino<br>
     │      截屏并发送指定FTP地址（工具）.ino<br>
     │      打开对方445端口（内网渗透）.ino<br>
     │      打开指定网页（工具）.ino<br>
     │      更改所用账户密码+关闭系统进程+蓝屏（工具）.ino<br>
     │      添加用户代码（工具）.ino<br>
     │      简简单单关个机（恶作剧项）.ino<br>
     │      隐藏CMD窗口（显示）.ino<br>
     │      鼠标不停移动（工具）.ino<br>
     │      
     ├─网站一句话入侵代码<br>
     │      aspx一句话木马写入（网站服务器版本-过狗过D盾）.ino<br>
     │      aspx一句话木马写入（网站服务器版本） .ino<br>
     │      asp一句话木马写入（网站服务器版本-Script Encoder 加密）.ino<br>
     │      asp一句话木马写入（网站服务器版本-动态解码）.ino<br>
     │      asp一句话木马写入（网站服务器版本） .ino<br>
     │      jsp一句话木马写入（jsp网站服务器使用）.ino<br>
     │      jsp木马写入（jsp网站服务器使用非一句话）.ino<br>
     │      php木马写入（php网站服务器使用-异或绕过）.ino<br>
     │      php木马写入（php网站服务器使用-类绕过）.ino<br>
     │      php木马写入（php网站服务器使用）.ino<br>
     │      
     └─运行U盘内的程序_扩大入侵范围<br>
         ├─UdiskRun<br>
         │      UdiskRun.ino<br>
         │      
         ├─UdiskRunv2<br>
         │      UdiskRunv2.ino<br>
         │      
         └─UdiskRunv3<br>
         UdiskRunv3.ino<br>


#### 演示<br>
[视频地址](https://www.yuque.com/u12074055/cpuceb/qfxz0f) <br>
视频：【硬件黑客】通过wifi控制上传执行，运行，编写hid脚本的badUSB以及一个小番外1<br>
视频：【硬件黑客】通过WIFI控制上传执行，运行，编写hid脚本的BadUSB以及一个小番外2<br>
视频：【BadUSB演示】U盘攻击：无视任何杀软，3秒黑掉你的电脑！<br>
视频：【BadUSB演示】入侵广场大屏幕，附带教程1<br>
视频：【BadUSB演示】入侵广场大屏幕，附带教程2<br>
视频：【BadUSB演示】BadUSB实现记录键盘<br>
视频：【BadUSB演示】更改所用账户密码+关闭系统进程+蓝屏测试<br>
![演示](https://upload-images.jianshu.io/upload_images/11477676-f1ac1cbf60370e8c.jpg?imageMogr2/auto-orient/strip|imageView2/2/w/600/format/webp)<br>

#### 进阶<br>
[视频地址](https://www.yuque.com/u12074055/cpuceb/dm1veu) <br>
视频：BadUSB&MSF联动<br>
视频：使用Nethunter启动BadUSB<br>
![进阶](https://upload-images.jianshu.io/upload_images/11477676-dc1c25d9bd6ae7b3.jpg?imageMogr2/auto-orient/strip|imageView2/2/w/640/format/webp)<br>

#### 常见问题和错误<br>
[视频地址](https://www.yuque.com/u12074055/cpuceb/uofha2) <br>
视频：BadUSB代码写入异常处理<br>
![常见问题和错误](https://upload-images.jianshu.io/upload_images/11477676-08caddd39a8ed8a5.jpg?imageMogr2/auto-orient/strip|imageView2/2/w/413/format/webp)<br>

#### 扩展<br>
[视频地址](https://www.yuque.com/u12074055/cpuceb/hs3n7p) <br>
视频：【硬件黑客】九元成本做一个BadUSB<br>
视频：【硬件黑客】可以直接替代大黄鸭和WiFiducky的新型BadUSB<br>
视频： BadUSB教程Digispark+中文BadUSB <br>
![扩展](https://upload-images.jianshu.io/upload_images/11477676-75bdb3e46a270e5a.jpg?imageMogr2/auto-orient/strip|imageView2/2/w/945/format/webp)<br>

#### 更新<br>
###### 2021.02.06更新代码，部分是从其他爱好者哪里搜寻的开源代码，部分是与MSF联动的方法流程以及我认为比较好用的Arduino Leonardo基础按键代码<br>
###### 2021.02.14更新代码，从其他优秀项目中获得启发，加入了CobaltStrike联动的木马、DNS劫持代码、linux和osx内置反向shell、WIFI连接木马、WIFI密码获取、网站一句话入侵代码、psl全屏hacked画面、运行U盘内的程序_扩大入侵范围以及实现很多实用功能的代码，情人节快乐！<br>
![更新](https://upload-images.jianshu.io/upload_images/11477676-0230861c14813313.jpeg?imageMogr2/auto-orient/strip|imageView2/2/w/554/format/webp)<br>

#### 项目链接<br>

代码已上传至GitHub及Gitee，**跪求star**，其他项目也挺好玩的， **继续跪求Star**。<br>

 **GitHub：** https://github.com/wangwei39120157028/BadUSB<br>
 
 **Gitee：**  https://gitee.com/wwy2018/BadUSB<br>
