#Protable

Portable类库是从APP开发实践中抽象出来的，与具体业务无关的纯净、便捷的类库。

它可以：

* 快速启动一个项目
> 免去：
> 搭建基础框架，对项目各种设置。
> 编写基础类库。
> 开发过程中时不时想起来：“XX项目中使用过某某类，还可以拿过来用”，于是搜罗、拷贝。


* 各种与业务完全解耦的组件、解决方案可复用。
> 高频使用的类库做到易用.
> 解决方案与业务剥离.
> 一些App必须的功能工具化。


###Portable简介
Portable分为：Base，Solutions

Base

项目中必须使用到的类，此外还有一些Category。特点：高频、易用。


Solutions

App中常用的组件、解决方案。可认为是Base的扩展，项目中极有可能用到，可选择使用。

在Solutions中，有些解决方案由于跟具体业务相关，仅仅提供了解决思路，需要到具体APP中完善使用。



###如何使用？

文档与示例不多，从代码入手吧

依赖的库文件：
libz   因为用到了gzip算法类，需要依赖此库。


支持IOS7及以上系统（从2015年夏天放弃支持IOS6）。
也正在推出[Swift版](https://github.com/zhenyonghou/Racer)，由于使用了Swift2.0，请用XCode7以上版本编译。

使用Portable库的时候，建议使用纯代码写App的UI，推荐纯代码+Masonry

可能会由少量第三方开源代码。


###关于

------

这个类库开始于2013年秋天，我开始开发自己的第一个项目的时候。考虑到以后还会开发其它项目，于是开始写这个库。

我曾经在一家创业公司独自做一个阅读类的APP，使用Portable，平均每周完成一个版本，版本迭代速度略高于苹果审核速度。Portable也被这家公司当做公共基础库，我成了公司的公共库维护员。能做到一周一版本还是得益于平时的积累和已有的很多解决方案。


我的邮箱：houzhenyong_dev@126.com
微信：mumuhou001

