# BadUSB
利用USB协议上的漏洞，通过更改USB的内部固件，在正常的USB接口接入后，模拟外置鼠标、键盘的功能，以此来使目标主机执行已经精心构造好的命令  

#### 前言
和大多数人一样，最初见到BadUSB是在美剧《黑客军团》中，是fsociety组织常用的工具之一，无论是向服务器下载木马控制被害者主机，还是达琳在停车场帅气的扔出大量USB钓鱼，BadUSB都是功不可没的物理武器之一。
![剧情中使用Hak5的USB rubber ducky控制目标主机](https://upload-images.jianshu.io/upload_images/11477676-71045c807dac0df6.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/554/format/webp "badusb")
![达琳在停车场扔BadUSB钓鱼](https://upload-images.jianshu.io/upload_images/11477676-3d1f812778254931.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/554/format/webp "badusb")
#### BadUSB的优点
在USB攻击领域，很多年前常用的是老式USB病毒autorun.inf，现在估计随便一个杀毒软件就能把它杀得死死的，与autorun.inf不同，BadUSB是利用了USB协议上的漏洞，通过更改USB的内部固件，在正常的USB接口接入后，模拟外置鼠标、键盘的功能，以此来使目标主机执行已经精心构造好的命令。在此过程中不会引起杀毒软件、防火墙的一丝怀疑。而且因为是在固件级别的应用，U盘格式化根本无法阻止其内部代码的执行。
同样因为是对USB的利用，Windows、Linux、MAC等各类操作系统不必联网下载专用的驱动程序。此外，向BadUSB烧录的程序极为简单，大部分是对键盘按键进行模拟，上手较为容易。
BadUSB也是社会工程学的一个典型示例，它极大地利用了人们的好奇心，在路边捡到的USB，估计九成以上的人们都想看看里面有什么东西，而当你插入U盘，攻击就很难再停止下来了。

#### 制作教程
[请移步至简书](https://www.jianshu.com/p/2b2b1dab85fe)

###### PS：效果爆炸，程序将更改所有用户的密码，你别忘了新的开机密码哈，笑~~
忘记了别慌，百度或者联系我，我教你怎么办~~
欢迎微信讨论技术：wwy18795980897

代码已上传至GitHub及Gitee， ** 此外还有一个连接服务器下载MSF木马并后台运行的程序 ** ，载体某宝就有卖， ** 跪求star ** ，其他项目也挺好玩的， **继续跪求Star ** 。
