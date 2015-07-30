#Protable

###在开启一个新项目的时候，我们需要什么？

1. 搭建基础框架，对项目各种设置。

2. 编写基础类库。

3. 开发过程中时不时想起来：“XX项目中使用过某某类，还可以拿过来用”，于是搜罗、拷贝。

4. 。。。

上面这种种情况，很多人碰到过，特别是你独自开发项目的时候。开发具体业务之前的工作太多了，这些时间还可以省去。

为了解决这些问题，Portable类库诞生了，它是与具体业务无关的纯净、便捷的类库。


我为Protable库做了什么？

1. 将高频使用的类库做到易用，加入Protable.

2. 将一些可复用的组件拿来加入Protable.

3. 将一些解决过的问题从业务中提炼出来，加入Protable.

4. 将一些App必须的功能工具化，拿来复用。

5. 会包含一少部分第三方的代码。


Protable要达到的目的：

1. 快速启动一个项目

2. 各种与业务完全解耦的组件、解决方案可复用。


###Portable简介
Portable分为：Base，Solutions

Base

项目中必须使用到的类，此外还有一些Category。特点：高频、易用。


Solutions

App中常用的组件、解决方案。可认为是Base的扩展，项目中极有可能用到，可选择使用。

在Solutions中，有些解决方案由于跟具体业务相关，仅仅提供了解决思路，需要到具体APP中完善使用。


###如何使用？

示例不多，从代码入手吧

依赖的库文件：
libz   因为用到了gzip算法类，需要依赖此库。


支持IOS7及以上系统。
从2015年夏天，我准备不支持IOS6了，后续的版本会从IOS7开始支持。也正在推出[Swift版](https://github.com/zhenyonghou/Racer)，由于使用了Swift2.0，请用XCode7以上版本编译。

使用Portable库的时候，建议使用纯代码写App的UI，推荐纯代码+Masonry



###关于

------

这个类库开始于2013年秋天，我开始开发自己的第一个项目的时候。考虑到以后还会开发其它项目，于是开始写这个库。

我曾经在一家创业公司独自做一个阅读类的APP，使用Portable，平均每周完成一个版本，版本迭代速度略高于苹果审核速度。Portable也被这家公司当做公共基础库，我成了公司的公共库维护员。能做到一周一版本还是得益于平时的积累和对遇到的很多问题都有已有的解决方案。


我的邮箱：houzhenyong_dev@126.com
微信：mumuhou001

