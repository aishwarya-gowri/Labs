library(ggplot2)

mtcars

data <- mtcars$mpg

data

m<-as.matrix(mtcars)

l <- unlist(labels(m)[1])

dotchart(data,labels=l)

![dot chart output](https://github.com/aishwarya-gowri/Labs/blob/master/DSR/lab6/Output%20screenshots/dot%20chart.png)
