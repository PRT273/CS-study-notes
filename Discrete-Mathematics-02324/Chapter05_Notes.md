第5章 关系与函数



设 R 是集合 A 上的关系。



1\. 自反性（Reflexive）



定义：

\\forall x\\in A,\\ (x,x)\\in R



每个元素都有自环

缺一个就不自反



2\. 反自反性（Irreflexive）



定义：

\\forall x\\in A,\\ (x,x)\\notin R



 一个自环都不能有

自反 \& 反自反 不能同时成立



3\. 对称性（Symmetric）



定义：

\\forall x,y\\in A,\\ (x,y)\\in R \\Rightarrow (y,x)\\in R



有来有回

自环天然满足对称性



4\. 反对称性（Antisymmetric）



定义：

\\forall x,y\\in A,\\ ((x,y)\\in R \\land (y,x)\\in R)\\Rightarrow x=y



重点理解：

禁止不同元素互相来回

自环 (x,x) 不违规



5\. 传递性（Transitive）



定义：

\\forall x,y,z\\in A,\\ (x,y)\\in R \\land (y,z)\\in R \\Rightarrow (x,z)\\in R



“顺着走能直接到”



6\. 常见组合关系（考试高频）



（1）等价关系



满足：自反、对称、传递



（2）偏序关系



满足：

自反、反对称、传递



例：≤，整除关系



快速判断口诀（超重要）

自反：看有没有所有 (x,x)

反自反：看有没有任何 (x,x)

对称：看有没有“只去不回”

反对称：看有没有“不同元素互相来回”

传递：看能不能“走两步却没第三步”





易错点总结：

对称 ≠ 反对称”

“反对称 ≠ 不对称”

自环 不破坏反对称

有 1↔2 且 1≠2 ⇒ 一定不反对称

