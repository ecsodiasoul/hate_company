#include <stdio.h>
//1.我也不知道这个我来这个公司来干嘛来了，上周三七月多少号我过来，到现在我还是十分迷惘，因为并未给我安排任务，而且和Mr.Zhu说了我先做测试，但由于那边测试的人去上海出差了，
//导致我依旧工作没有进展。这tm就很烦，觉得说来三个礼拜，说是去的时间不要太多，但是现在小一个礼拜了，工作还没开展，每天就呆在电脑桌前看俄罗斯圆表程序，那我tm干嘛来了。这里
//诚然这里的人很热情，氛围也不赖，工作环境也好。但是，奈何我感觉自己像是无根浮萍，随波飘荡，连一点工作计划要求都没有，只有金工布置的长线任务，确实令我感到郁闷。这种和工作环境迟迟融
//不进的感觉挺让人郁闷的。还有宿舍的桌子椅子并没有，自己又花了三四百元买生活用品，也是糟心，这样晚上就没法回去学习了，这么说来也就白天起个早来这里学一学，具体多早呢，补上晚上的时间，
//就在早上七点整到公司吧，实属无奈之举。
//另外，我感觉工作还是有点束手束脚的。最近脑子的事情太杂了，
//都没法安定下来好好做事，甚至于找不到要做的东西和要走的路。
//1.把低功耗的目标实现了，自己配制驱动层，把低功耗的电流与数据手册做个对照，看看是否和手册一样。
//2.看看能否自己试着直接操作寄存器，去实现功能，这个需要好好探索。
//3.看俄罗斯圆表，那个积算仪程序需要做备注，去理解，现在还是没有很大的头绪，驱动层还是想要搞懂的，但是有些功能函数并不懂，这些再整理看看，到时候八月份和金工对一下看看。
//4.对于结构体联合体，二维数组等用法，还需要多加练习，这个还是拿华大HC32L136的板子练一下，与第一点和第二点结合。
//5.只有当这些都全部弄好以后，再去学习算法，跟高级的应用层上的编程应用，你才能更加游刃有余。不过有些运用在124的过程中会得到实践。
//时间上，124三点可以划出很大一部分时间，逐级的联合地去运用，对于3这一点，俄罗斯圆积算仪的概念理论可以自己列一张表出来，这样比笔记本上的东一页西一页很快忘记要好很多。
//还有就是应用层上面的东西，比如说逻辑，对于器件的编程使用，这些在短期内虽然金工并不提倡我去做，但是在在俄罗斯积算仪表的程序里我还是希望我鞥取理解里面的运作，这样在气表上
//我也能懂得多一点，最好是能够熟悉掌握积算仪内部与流道的通信协议，与上位机的通信协议，里面修正参数的运算。甚至于说是能够独立应厂商要求更改甚至于重新设计编写程序。
//倘若你掌握了一二三四，那么就可以自己在华大的程序里写俄罗斯积算仪的程序。这样写有助于你成为稍微看起来独当一面的程序员。注：这是应该也是他人的期待吧。从这一点需要确认的是
//这三个礼拜左右的时间我应该还达不到某人的期待，可能需要一个月，两个月，取决于我，这也是为什么大家要我先好好学软件的原因。
//sourceinsight 这款软件既然推荐了，那就好好去掌握，看看他给我的带来的便利性有哪些。
//还有NB——iot的使用练习，对接物联网平台要做成呀。
//此外还有扩展延伸的zigbee，lora等等，我并不觉得这个特别难，只是需要一点时间。
//以上是软件整体的计划方向，不说不知道，一列吓一跳，怎么这么多。
//a.硬件上，虽然金工没有要求，在未来的职业道路上也并未有一定走硬件这条路。但是硬件的学习令我看到了制作产品的无限可能性，他可以作为我的一个旁路分支发展一下，但短期内看来
//还是有点紧，这里的具体知识点和规划还是列一列吧，免得最近心事重重做不好事情，你说呢？这个词还是大学时候那个逗比老捷裕的口头禅，没有这么纯粹的人了哈哈。言归正传，
//关于硬件的学习，首先电路原理、电路分析基础，模电数电二三极管，再是单片机的数据手册，直到这一点，我才能完整的设计一个单片机的板子。
//这里如果说我掌握了硬件电路板的简单绘制，那么我还应该学习一些芯片，去掌握学习一些更加高阶的运用。这方面之后没准可以问一问我们的管家豪。
//在这些过后，我可以试着自己去设计一款我觉得很牛的板子，写上我觉得很牛的程序。综合地检测我的水平。

//再次声明，我希望我接下来会时刻翻看这个库，希望我的计划能够实际内容去走，希望我可以时时刻刻完善我的计划和并按照计划取执行。最近有很多奇奇怪怪的想法冒出来，有怀旧的，有阴暗的
//总觉得少了一种心平气和，快乐成长的心态，可能是太多的心理负担造成的积压，可能是某人某物造成的负面情趣，但其实这些都不重要，最为关键的是我的成长速度和实力。
//最后是时间的规划：以上说了这么多，总算是把我心头的丝线全理出来了，有迷惘的，有焦急的，有惶恐的，有沮丧的，有自卑的。
//接下来的时间规划应当是以软件为主，硬件就不去管它了吧，软件的学习又先以俄罗斯圆表的积算仪为主，再以哈特物联网的积算仪测试为辅助，兼以学习单片机的功力加深。
//今天是七月十三号，距离我杭州这边有个三礼拜了，但是到目前为止，只是看到了他们的物联网板子，别的一概不知，哪有什么随心所欲的全线学习呀。不知过一个礼拜能否见到测试。
//算了一下，七月月底刚好礼拜天，也就是还有两个礼拜零二天。毛估估半个月。你要说半个月的时间要怎么学软件，时间上真的迷惘。
//就上面说的，把时间规划到天，上午做什么下午什么，或者这几个小时做什么，接下来做什么。
//首先把俄罗斯圆表的积算仪的程序理解，预计在二十号把应用层和驱动层过一遍。
//然后再七月二十五号把哈特这边的测试模块什么的做一个汇总心得。
//最后在当个月最后一天之前把程序的数据手册运用一下，能运用多少就运用多少。

//今天是7_28号，距离我过来有三个礼拜多一天吧。上礼拜和金工通信了一下，觉得还是得留，毕竟前两个礼拜并没有确确实实的学到什么，我感觉上哈，可能会被纠正思路说什么我来上班的，不是来
//学习的哈哈，偷换概念这叫。我应蓝宝石申易来哈特公司学习，学自然也是学习燃气表的研发相关的内容，这里的学习是指学习东西，尽快成长以获得申易研发人员的研发资格。不得不承认，人的有
//些想法根深蒂固，可能是我觉得很多东西没这么难，不过一些概念，不过一些思路方法，只要问对人，问到点学习起来不要太快。但是实际上有人和我说要自己多多摸索，以后没有人义务教我，嗯，
//有道理，一个是自己探索，一个是他人教授，中间的中庸之道是自己整理好问题请别人帮忙。可即便是这样，我依旧觉得很空，因为测试朱只给我了一个文档，里面只有40多个步骤，这里个顶多测试
//两礼拜就行了，所以有相当多的时间我是在浪费，那我自己又是那种只想专注于一件事的人，所以才会有这么大的情绪，感觉一直被人拖着时间。
//一直被人拖着，是我的主观感受，因为我完全可以在空闲的时间做我自己的事，很多人想要空下来提升自我都没时间呢，来这边我最大感受是，慢，除了慢还是慢，看他们几个新来的貌似也就
//只能自己看着学自己的，也没有活儿派给干。
//从我的角度考虑，只是想要到这边来尽快地饱满地学习这里的新知识，然后回去以饱满的热情为申易创造贡献。但是这仅仅是工作上的。
//而从他们的角度考虑，讲真我的到来不重要，不过是多了一张吃饭的嘴巴，一张睡觉的床位，能否学到东西与他们无关，所以我去问问题，态度上还是要多远滚多远的态度，能敷衍就敷衍，能含糊其辞
//就含糊其辞的态度。可能是混，可能是不想教，我也说不准。
//但是可以肯定的是，我的工作还是由我来推动的，没有人催我，也没有人给我压力，到是长线的学习还是有些压力，需要金工到时候检验认可的，所以与其耗在这里等别人，还不如我自己先好好研究
//自己的，我上面不是说了好多的目标吗？一个个去实践他去接近了解他。只有实践了解他，才能从个人能力上去拔高，才会有底气去做之后的研发任务。


//关于我留在哈特的时间，看我在这里掌握的基本内容情况，以及和金工他们的反馈商讨，反正我的去留表面上由我，实际也不由我。公司里领导大于天嘛呵呵。

//下午直接去问胡姐问题，一样的问法，既然他都推三阻四了，不是不会就是真心不想教，那我也没必要软磨硬泡了。表示很淦。
//此外测试的能力，研发的能力要提升的话千里之行始于足下。高情商的回答是我来这里稍微了解他们的东西，更多地去学我自己的东西。



















