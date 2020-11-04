library(ggplot2)

install.packages("gcookbook")

library(gcookbook)

cabbage_exp
#mode(cabbage_exp)
#library(ggplot2)

ggplot(cabbage_exp,aes(x=Date,y=Weight,fill=Cultivar))+geom_bar(stat="identity",position = "dodge")+ geom_text(aes(label=Weight),vjust=1.5,colour="white",position = position_dodge(.9),size=3)


![output screenshot](https://github.com/aishwarya-gowri/Labs/blob/master/DSR/lab6/Output%20screenshots/barchart_ouput.png)
