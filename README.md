#Protable
写这个库的目的：
1. 开发任何项目都能快速搭建起框架。
2. 一次解决好繁琐的基础问题，以提高项目开发速度。

Portable，与具体业务无关的纯净、便捷的类库。

使用这个库的时候，建议使用纯代码写App的UI，推荐纯代码+Masonry

这个库只是为一个项目贡献最基础的东西，里面也不会包括某某问题的解决方案或是最佳实践，一个项目最重要的是业务问题的解决方案，但如果没有解决好基础问题，业务层的开发也不会太顺利。

到现在为止，用到Portable的项目，也大大小小四五个了，我曾经在一家创业公司独自做一个阅读类的APP，使用到了Portable，平均每周完成一个版本，版本迭代速度略高于苹果审核速度。Portable也被这家公司当做公共基础库，我成了公司的公共库维护员。


支持IOS6及以上系统。
从2015年夏天，我准备不支持IOS6了，也会推出Swift版。


###Portable简介
Portable分两部分：Core和Extended
####Core 
项目中必须使用到的类和组件。如：崩溃捕获、网络状态监控、缓存等，还有个皮肤管理类，可支持换肤，此外还有一些Category。
####Extended
在Core之外的扩展，可选择使用里面的类和组件。


##使用
1. 将Protable目录拷贝到本地，引入工程中，如果多个工程使用它，建议不要选中Copy items if needed选项。
2. 在Build Settings -> Search Paths-> Header Search Paths 中加入：../Protable/Core路径和../Protable/extensions路径

##关于
这个类库开始于2013年秋天，我开始开发自己的第一个项目的时候。随着IOS系统的变迁和我对技术的理解与积累，这个库也在变化，我也从中受益很多。

我的邮箱：houzhenyong_dev@126.com
微信：mumuhou001

